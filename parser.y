%{
    #include<stdio.h>
    #include<unistd.h>

    #include"GrammarTree.h"
    #include"ScopeStack.h"
    #include"ArrayInfo.h"
    #include"SymbolTable.h"
    
    int yylex();
    void yyerror(const char* fmt, ...);
    
    extern int tuple_trigger;
    extern int semantic_check;
    extern int gmerror;
    extern int yylineno;

    ScopeStack stack;
%}

%define parse.error verbose
%locations

%union {
    GrammarTree grammar_tree;
}

// 以下为终结符集
%token <grammar_tree> T_Void T_Int T_Const
%token <grammar_tree> T_While T_If T_Else T_Return T_Break T_Continue
%token <grammar_tree> T_LessEqual T_GreaterEqual T_Equal T_NotEqual
%token <grammar_tree> T_And T_Or
%token <grammar_tree> T_Identifier T_StringConstant T_IntConstant
%token <grammar_tree> '+' '-' '*' '/' '%' '=' '!' '<' '>'

// 用于消除if-else语句的移进/归约冲突
%token   T_NoElse
%nonassoc T_NoElse
%nonassoc T_Else

// 以下为非终结符集
%type <grammar_tree> CompUnit Decl FuncDef ConstDecl BType ConstDefSeq
%type <grammar_tree> ConstDef ConstInitVal ConstArraySubSeq
%type <grammar_tree> ArraySubSeq Exp ConstInitValSeq VarDecl VarDefSeq VarDef
%type <grammar_tree> InitVal InitValSeq Block FuncFParams
%type <grammar_tree> FuncFParam BlockItemSeq BlockItem Stmt LVal
%type <grammar_tree> FuncRParams Program

// precedence
%right '='
%left T_Or
%left T_And
%left T_Equal T_NotEqual
%left '<' '>' T_GreaterEqual T_LessEqual
%left '+' '-'
%left '*' '/' '%'
%right '!'
%right '('

%%
Program : CompUnit { // GlobalScope
    // 1. 词法语法分析 建立AST
    $$ = CreateGrammarTree(Program, 1, $1); 
    // 2. 打印二元组和语法树
    if (tuple_trigger)
    {
        printf("__________________________________________________\n\n");
        printf("The two-tuples of \"Lexical Analyzing\" are printed!\n");
        printf("__________________________________________________\n");
    }
    // TODO: 添加语法分析
    if (!gmerror) {
        printf("\nNow print the grammar-tree of \"Grammar Analyzing\":\n");
        printf("__________________________________________________\n\n"); 
        TraverseGrammarTree($$, 0);
        printf("__________________________________________________\n\n"); 
        printf("The grammar-tree of \"Grammar Analyzing\" is printed!\n\n"); 
    }
    // 3. 建立符号表
    // 把CompUnit的GlobalScope作为Program的GlobalScope
    $$->global_scope = $1->global_scope;
    InitScopeStack(&stack);
    Scope scope;
    scope.type = ScopeGlobal;
    scope.global = $$->global_scope;
    // 4. 若semantic_check开启 则执行ScopeTrial进行静态语义检查
    if (semantic_check) 
    {
        printf("Semantic check processing...\n");
        ScopeTrial($$, scope, &stack);
    }
    // 5. 没有语义错误时 打印符号表
    if (!smerror)
    {
        printf("\nNow print the symbol tables of \"Semantic Analyzing\":\n");
        printf("__________________________________________________\n\n"); 
        DisplayGlobalScope($1->global_scope);
        printf("__________________________________________________\n\n"); 
        printf("The symbol tables of \"Semantic Analyzing\" is printed!\n\n"); 
    }
}
;

CompUnit: // GlobalScope
    Decl {
    $$ = CreateGrammarTree(CompUnit, 1, $1);
    // 新建一个GlobalScope 因为Decl默认为LocalScope 所以需要对其进行转换
    $$->global_scope = AddLocalIntoGlobal($$->global_scope, $1->local_scope);
}
|   FuncDef {
    $$ = CreateGrammarTree(CompUnit, 1, $1);
    // FuncDef已经是GlobalScopeEntry 直接加入即可
    $$->global_scope = AddEntryIntoGlobalScope($$->global_scope, $1->global_entry);
}
|   CompUnit Decl {
    $$ = CreateGrammarTree(CompUnit, 2, $1, $2);
    // 将Decl转换为GlobalScopeEntry 然后连接到CompUnit上
    $$->global_scope = AddLocalIntoGlobal($1->global_scope, $2->local_scope);
}
|   CompUnit FuncDef {
    $$ = CreateGrammarTree(CompUnit, 2, $1, $2);
    // 将FuncDef连接到CompUnit上
    $$->global_scope = AddEntryIntoGlobalScope($1->global_scope, $2->global_entry);
}
;

Decl: // LocalScope
    ConstDecl {
    $$ = CreateGrammarTree(Decl, 1, $1);
    // 直接赋值即可
    $$->local_scope = $1->local_scope;
}
|   VarDecl {
    $$ = CreateGrammarTree(Decl, 1, $1);
    // 直接赋值即可
    $$->local_scope = $1->local_scope;
}
;

ConstDecl: // LocalScope
    T_Const BType ConstDefSeq ';' {
    $$ = CreateGrammarTree(ConstDecl, 3, $1, $2, $3);
    // 为ConstDefSeq(LocalScope)中的变量添加类型isConst
    $$->local_scope = AttachTypeToLocalScope($3->local_scope, /* isConst */ true);
}
;

ConstDefSeq: // LocalScope
    ConstDef {
    $$ = CreateGrammarTree(ConstDefSeq, 1, $1);
    // 新建一个LocalScope 放入ConstDef
    $$->local_scope = AddEntryIntoLocalScope($$->local_scope, $1->local_entry);
}
|   ConstDefSeq ',' ConstDef {
    $$ = CreateGrammarTree(ConstDefSeq, 2, $1, $3);
    // 将ConstDef连在ConstDefSeq后
    $$->local_scope = AddEntryIntoLocalScope($1->local_scope, $3->local_entry);
}
;

BType:
    T_Void {
    $$ = CreateGrammarTree(BType, 1, $1);
}
|   T_Int {
    $$ = CreateGrammarTree(BType, 1, $1);
}
;

ConstDef: // LocalScopeEntry
    T_Identifier '=' ConstInitVal {
    $$ = CreateGrammarTree(ConstDef, 2, $1, $3);
    // 新建一个LocalScopeEntry
    $$->local_entry = NewLocalIntEntry($1->string_value, true, ((*($3->raw_values))[0])->value, NULL);
}
|   T_Identifier ConstArraySubSeq '=' ConstInitVal {
    $$ = CreateGrammarTree(ConstDef, 3, $1, $2, $4);
    // 新建一个LocalScopeEntry
    $$->local_entry = NewLocalArrayEntry($1->string_value, true, NewArrayInfo($2->dims, $4->raw_values));
    $$->local_entry->array_info->init();
}
;

ConstArraySubSeq: // dims - 这里的 vector 包含第一维长度
    '[' Exp ']' {
    $$ = CreateGrammarTree(ConstArraySubSeq, 1, $2);
    // 此为第一维的大小
    CheckExprValue($2, &stack);
    if (!$2->is_constant_expr) {
        yyerror("Line %d: ConstExp needed!", yylineno);
    }
    $$->dims = AppendDim($$->dims, $2->expr_value);
}
| ConstArraySubSeq '[' Exp ']' {
    $$ = CreateGrammarTree(ConstArraySubSeq, 2, $1, $3);
    CheckExprValue($3, &stack);
    if (!$3->is_constant_expr) {
        yyerror("Line %d: ConstExp needed!", yylineno);
    }
    $$->dims = AppendDim($1->dims, $3->expr_value);
}
;

// 此项与ConstArraySubSeq的区别在于这里的Exp不要求在编译时就能计算出值
// 对应给数组指定元素赋值的情况 **暂时不处理**
ArraySubSeq:
    '[' Exp ']' {
    $$ = CreateGrammarTree(ArraySubSeq, 0, -1);
}
| ArraySubSeq '[' Exp ']' {
    $$ = CreateGrammarTree(ArraySubSeq, 2, $1, $3);
}
;


ConstInitVal: // vector<ArrayInitValue> *raw_values
    Exp {
    $$ = CreateGrammarTree(ConstInitVal, 1, $1);
    // 计算Exp的值 这里的Exp需要能在编译时就求出值
    CheckExprValue($1, &stack);
    if (!$1->is_constant_expr) {
        yyerror("Line %d: ConstExp needed!\n", yylineno);
    }
    $$->raw_values = NewInitValue($$->raw_values, Value, $1->expr_value, NULL);
}
|   '{' ConstInitValSeq '}' {
    $$ = CreateGrammarTree(ConstInitVal, 1, $2);
    $$->raw_values = AppendInitValue($$->raw_values, $2->raw_values, true);
}
|   '{' '}' {
    $$ = CreateGrammarTree(ConstInitVal, 0, -1);
    // 这一部分的子数组初始化为全零
    $$->raw_values = AppendInitValue($$->raw_values, NULL, true);
}
;

ConstInitValSeq: // vector<ArrayInitValue> *raw_values
    ConstInitVal {
    $$ = CreateGrammarTree(ConstInitValSeq, 1, $1);
    $$->raw_values = AppendInitValue($$->raw_values, $1->raw_values, false);
}
|   ConstInitValSeq ',' ConstInitVal {
    $$ = CreateGrammarTree(ConstInitValSeq, 2, $1, $3);
    $$->raw_values = AppendInitValue($1->raw_values, $3->raw_values, false);
}
;


VarDecl: // LocalScope
    BType VarDefSeq ';' {
    $$ = CreateGrammarTree(VarDecl, 2, $1, $2);
    // 添加变量标记
    $$->local_scope = AttachTypeToLocalScope($2->local_scope, false);
}
;

VarDefSeq: // LocalScope
    VarDef {
    $$ = CreateGrammarTree(VarDefSeq, 1, $1);
    $$->local_scope = AddEntryIntoLocalScope($$->local_scope, $1->local_entry);
}
|   VarDefSeq ',' VarDef {
    $$ = CreateGrammarTree(VarDefSeq, 2, $1, $3);
    $$->local_scope = AddEntryIntoLocalScope($1->local_scope, $3->local_entry);
}
;

VarDef: // LocalScopeEntry
    T_Identifier {
    $$ = CreateGrammarTree(VarDef, 1, $1);
    $$->local_entry = NewLocalIntEntry($1->string_value, false, 0, NULL);
}
|   T_Identifier ConstArraySubSeq {
    $$ = CreateGrammarTree(VarDef, 2, $1, $2);
    $$->local_entry = NewLocalArrayEntry($1->string_value, false, NewArrayInfo($2->dims, NULL));
}
|   T_Identifier '=' InitVal {
    $$ = CreateGrammarTree(VarDef, 2, $1, $3);
    if ($3->lchild->type != Exp) { //　FIXME
        yyerror("Line %d: InitVal must be Exp type!\n", yylineno);
    }
    $$->local_entry = NewLocalIntEntry($1->string_value, false, 0, $3);
} 
|   T_Identifier ConstArraySubSeq '=' InitVal {
    $$ = CreateGrammarTree(VarDef, 3, $1, $2, $4);
    $$->local_entry = NewLocalArrayEntry($1->string_value, false, NewArrayInfo($2->dims, $4->raw_values));
}
;

InitVal: // vector<ArrayInitValue> *raw_values
    Exp {
    $$ = CreateGrammarTree(InitVal, 1, $1);
    $$->raw_values = NewInitValue($$->raw_values, Expr, 0, $1);
}
|   '{' InitValSeq '}' {
    $$ = CreateGrammarTree(InitVal, 1, $2);
    AppendInitValue($$->raw_values, $2->raw_values, true);
}
|   '{' '}' {
    $$ = CreateGrammarTree(InitVal, 0, -1);
    AppendInitValue($$->raw_values, NULL, false);
}
;

InitValSeq: // vector<ArrayInitValue> *raw_values
    InitVal {
    $$ = CreateGrammarTree(InitValSeq, 1, $1);
    $$->raw_values = AppendInitValue($$->raw_values, $1->raw_values, false);
}
|   InitValSeq ',' InitVal {
    $$ = CreateGrammarTree(InitValSeq, 2, $1, $3);
    $$->raw_values = AppendInitValue($1->raw_values, $3->raw_values, false);
}
;



FuncDef: // GlobalScopeEntry
    BType T_Identifier '(' ')' Block {
    $$ = CreateGrammarTree(FuncDef, 3, $1, $2, $5);
    // 新建一个FormalScopeEntry和GlobalScopeEntry
    // FormalScope 置为 Null
    // LocalScopeEntry 置为 Block->embedded_scope
    LocalScope *_embedded_scope = NULL;
    if (!($5->local_entry)) _embedded_scope = $5->local_entry->embedded_scope;
    $$->global_entry = NewFunctionEntry($2->string_value, $1->lchild->type == T_Void, 0, NULL, _embedded_scope);
}
|   BType T_Identifier '(' FuncFParams ')' Block {
    $$ = CreateGrammarTree(FuncDef, 4, $1, $2, $4, $6);
    LocalScope *_embedded_scope = NULL;
    if (!($6->local_entry)) _embedded_scope = $6->local_entry->embedded_scope;
    $$->global_entry = NewFunctionEntry($2->string_value, $1->lchild->type == T_Void, $4->formal_scope->size(), $4->formal_scope, _embedded_scope);
}
;

FuncFParams: // FormalScope
    FuncFParam {
    $$ = CreateGrammarTree(FuncFParams, 1, $1);
    // 新建FormalScope 加入 FuncParam
    $$->formal_scope = AddEntryIntoFormalScope($$->formal_scope, $1->formal_entry);
}
|   FuncFParams ',' FuncFParam {
    $$ = CreateGrammarTree(FuncFParams, 2, $1, $3);
    // FIXME
    $$->formal_scope = AddEntryIntoFormalScope($1->formal_scope, $3->formal_entry);
}
;

FuncFParam: // FormalScopeEntry
    BType T_Identifier {
    $$ = CreateGrammarTree(FuncFParam, 2, $1, $2);
    // 新建FormalScopeEntry
    $$->formal_entry = NewFormalEntry($2->string_value, false, NULL);
}
|   BType T_Identifier '[' ']' ArraySubSeq {
    $$ = CreateGrammarTree(FuncFParam, 3, $1, $2, $5);
    $$->formal_entry = NewFormalEntry($2->string_value, true, NewArrayInfo(InsertDim1($5->dims), NULL));
}
;



Block: // LocalScopeEntry
    // block 作为函数体时 GlobalScopeEntry（对应函数定义）的LocalScope是这个entry的embeddedScope字段
    // block 作为{ }里的embedded scope时 需要是函数local scope里的一个表项 即直接添加这个entry
    '{' '}' {
    $$ = CreateGrammarTree(Block, 0, -1);
    // Block直接设置为空的LocalScopeEntry
    $$->local_entry = NULL; // ！ 注意 之后在处理函数定义时需要判断是否为空
}
|   '{' BlockItemSeq '}' {
    $$ = CreateGrammarTree(Block, 1, $2);
    $$->local_entry = NewEmbeddedScopeEntry($2->local_scope);
}
;

BlockItemSeq: // LocalScope - 可含有多个变量/数组定义
    BlockItem {
    $$ = CreateGrammarTree(BlockItemSeq, 1, $1);
    $$->local_scope = AddLocalIntoLocal($$->local_scope, $1->local_scope);
}
|   BlockItemSeq BlockItem {
    $$ = CreateGrammarTree(BlockItemSeq, 2, $1, $2);
    $$->local_scope = AddLocalIntoLocal($1->local_scope, $2->local_scope);
    
}
;

BlockItem: // LocalScope
    Decl {
    $$ = CreateGrammarTree(BlockItem, 1, $1);
    $$->local_scope = AddLocalIntoLocal($$->local_scope, $1->local_scope);
}
|   Stmt {
    $$ = CreateGrammarTree(BlockItem, 1, $1);
    $$->local_scope = AddLocalIntoLocal($$->local_scope, $1->local_scope);
}
;



Stmt: // LocalScope
    LVal '=' Exp ';' {
    $$ = CreateGrammarTree(Stmt, 3, $1, $2, $3);
}
|   Exp ';' {
    $$ = CreateGrammarTree(Stmt, 1, $1);
}  
|   ';' {
    $$ = CreateGrammarTree(Stmt, 0, -1);
}
|   Block {
    $$ = CreateGrammarTree(Stmt, 1, $1);
    // add 1 entry
    $$->local_scope = AddEntryIntoLocalScope($$->local_scope, $1->local_entry);
}
|   T_If '(' Exp ')' Stmt %prec T_NoElse {
    $$ = CreateGrammarTree(Stmt, 3, $1, $3, $5);
    // add 1 entry
    $$->local_scope = AddEntryIntoLocalScope($$->local_scope, $5->local_entry);
}
|   T_If '(' Exp ')' Stmt T_Else Stmt {
    $$ = CreateGrammarTree(Stmt, 5, $1, $3, $5, $6, $7);
    // add 2 entries
    $$->local_scope = AddEntryIntoLocalScope($$->local_scope, $5->local_entry);
    $$->local_scope = AddEntryIntoLocalScope($$->local_scope, $7->local_entry);
}
|   T_While '(' Exp ')' Stmt {
    $$ = CreateGrammarTree(Stmt, 3, $1, $3, $5);
    // add 1 entry
    $$->local_scope = AddEntryIntoLocalScope($$->local_scope, $5->local_entry);
}
|   T_Break ';' {
    $$ = CreateGrammarTree(Stmt, 1, $1);
}
|   T_Continue ';' {
    $$ = CreateGrammarTree(Stmt, 1, $1);
}
|   T_Return Exp ';' {
    $$ = CreateGrammarTree(Stmt, 2, $1, $2);
}
|   T_Return ';' {
    $$ = CreateGrammarTree(Stmt, 1, $1);
}
;


Exp:
    '(' Exp ')' {
    $$ = CreateGrammarTree(Exp, 1, $2);
}
|   LVal {
    $$ = CreateGrammarTree(Exp, 1, $1);
}
|   T_StringConstant {
    $$ = CreateGrammarTree(Exp, 1, $1);
}
|   T_IntConstant {
    $$ = CreateGrammarTree(Exp, 1, $1);
}
|   T_Identifier '(' FuncRParams ')' {
    $$ = CreateGrammarTree(Exp, 2, $1, $3);
}
|   T_Identifier '(' ')' {
    $$ = CreateGrammarTree(Exp, 1, $1);
}
|   '+' Exp {
    $$ = CreateGrammarTree(Exp, 2, $1, $2);
}
|   '-' Exp {
    $$ = CreateGrammarTree(Exp, 2, $1, $2);
}
|   '!' Exp {
    $$ = CreateGrammarTree(Exp, 2, $1, $2);
}
|   Exp '*' Exp {
    $$ = CreateGrammarTree(Exp, 3, $1, $2, $3);
}
|   Exp '/' Exp {
    $$ = CreateGrammarTree(Exp, 3, $1, $2, $3);
}
|   Exp '%' Exp {
    $$ = CreateGrammarTree(Exp, 3, $1, $2, $3);
}
|   Exp '+' Exp {
    $$ = CreateGrammarTree(Exp, 3, $1, $2, $3);
}
|   Exp '-' Exp {
    $$ = CreateGrammarTree(Exp, 3, $1, $2, $3);
}
|   Exp '>' Exp {
    $$ = CreateGrammarTree(Exp, 3, $1, $2, $3);
}
|   Exp '<' Exp {
    $$ = CreateGrammarTree(Exp, 3, $1, $2, $3);
}
|   Exp T_LessEqual Exp {
    $$ = CreateGrammarTree(Exp, 3, $1, $2, $3);
}
|   Exp T_GreaterEqual Exp {
    $$ = CreateGrammarTree(Exp, 3, $1, $2, $3);
}
|   Exp T_Equal Exp {
    $$ = CreateGrammarTree(Exp, 3, $1, $2, $3);
}
|   Exp T_NotEqual Exp {
    $$ = CreateGrammarTree(Exp, 3, $1, $2, $3);
}
|   Exp T_And Exp {
    $$ = CreateGrammarTree(Exp, 3, $1, $2, $3);
}
|   Exp T_Or Exp {
    $$ = CreateGrammarTree(Exp, 3, $1, $2, $3);
}
;


// 左值表达式
LVal:
    T_Identifier ArraySubSeq { // 数组元素
    $$ = CreateGrammarTree(LVal, 2, $1, $2);
}
|   T_Identifier { // 标识符
    $$ = CreateGrammarTree(LVal, 1, $1);
}
;


// 函数实参
FuncRParams:
    Exp {
    $$ = CreateGrammarTree(FuncRParams, 1, $1);
}
|   FuncRParams ',' Exp {
    $$ = CreateGrammarTree(FuncRParams, 2, $1, $3);
}
;


%%

#include<stdarg.h> // 支持可变数目参数

void yyerror(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "Error type B at Line %d Column %d: ", yylineno, yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\n");
}

