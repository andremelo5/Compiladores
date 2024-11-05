/* START definitions section -- C code delimited by %{ ... %} and token declarations */

%{
#include "ast.h"

int yylex(void);
void yyerror(char *);


struct node *program;

%}

%token SEMICOLON COMMA BLANKID ASSIGN STAR DIV MINUS PLUS EQ GE GT LBRACE LE LPAR LSQ LT MOD NE NOT AND OR RBRACE RPAR RSQ PACKAGE RETURN ELSE FOR IF VAR INT FLOAT32 BOOL STRING PRINT PARSEINT FUNC CMDARGS RESERVED 


%token<lexeme> IDENTIFIER NATURAL DECIMAL STRLIT
%type<node> program  declarations vardeclaration  varspec varspec2 type funcdeclaration funcheader funcparams funcheader2 parameters parameters2 funcbody  varsandstatements  statement statement2 statement3 statement4 printstatement parseargs funcinvocation funcinvocation2 expr


%left COMMA
%right ASSIGN
%left OR
%left AND
%left NOT
%left GE LE LT GT EQ NE
%left PLUS MINUS
%left STAR DIV MOD
%left LPAR RPAR LBRACE RBRACE

%nonassoc UMINUS UPLUS
%nonassoc IFELSE

%union{
    char *lexeme;
    struct node *node;
}

/* START grammar rules section -- BNF grammar */

%%

program: PACKAGE IDENTIFIER SEMICOLON declarations              {$$=program=newnode(Program,NULL);
                                                                    if($2!=NULL){addchild($$,newnode(Identifier,$2));} //perguntar pq e que o identifier pode ser null
                                                                    addchild($$,$4);}
    ;


declarations: vardeclaration SEMICOLON declarations             {$$ = $1;
                                                                    if($3!=NULL){addchild($$,$3);}}
    | funcdeclaration SEMICOLON declarations                    {$$ = $1;
                                                                    if($3!=NULL){addchild($$,$3);}}
    | /*vazio*/                                                 {$$=NULL;}
    ;


vardeclaration: VAR varspec                                     {$$=$2;}
    | VAR LPAR varspec SEMICOLON RPAR                           {$$=$3;}
    ;

varspec: IDENTIFIER varspec2 type                               {$$=newnode(VarDecl,NULL);
                                                                    addchild($$,$3);
                                                                    addchild($$,newnode(Identifier,$1));
                                                                    if($2!=NULL){addchild($$,$2);}}                                                                                             
    ;

varspec2: COMMA IDENTIFIER varspec2                             {$$=newnode(VarDecl,NULL);
                                                                    addchild($$,newnode(Identifier,$2));
                                                                    if($3!=NULL){addchild($$,$3);}}                                                                    
    | /*vazio*/                                                 {$$=NULL;}
    ;

type: INT                                                       {$$=newnode(Int,NULL);}
    | FLOAT32                                                   {$$=newnode(Float32,NULL);}
    | BOOL                                                      {$$=newnode(Bool,NULL);}
    | STRING                                                    {$$=newnode(String,NULL);}
    ;

funcdeclaration: FUNC funcheader funcbody                                       {$$=newnode(FuncDecl,NULL);
                                                                                    addchild($$,$2);
                                                                                    addchild($$,$3);}
    ;

funcheader: IDENTIFIER LPAR funcparams RPAR funcheader2                        {$$=newnode(FuncHeader,NULL);
                                                                                    addchild($$,newnode(Identifier,$1));
                                                                                    addchild($$,newnode(FuncParams,NULL));
                                                                                    if($3!=NULL){addchild($$,$3);}
                                                                                    if($5!=NULL){addchild($$,$5);}}
    ;

funcparams: parameters                                                          {$$=$1;}
    |/*vazio*/                                                                  {$$=NULL;}
    ;

funcheader2: type                                                               {$$=$1;}
    |/*vazio*/                                                                  {$$=NULL;}
    ;

parameters: IDENTIFIER type parameters2                                         {$$=newnode(ParamDecl,NULL);
                                                                                    addchild($$,$2);
                                                                                    addchild($$,newnode(Identifier,$1));
                                                                                    if($3!=NULL){addchild($$,$3);}}
    ;

parameters2: COMMA IDENTIFIER type parameters2                                 {$$=newnode(ParamDecl,NULL);
                                                                                    addchild($$,$3);
                                                                                    addchild($$,newnode(Identifier,$2));
                                                                                    if($4!=NULL){addchild($$,$4);}}
    |/*vazio*/                                                                  {$$=NULL;}
    ;

funcbody: LBRACE varsandstatements RBRACE                                       {$$=newnode(FuncBody,NULL);
                                                                                    if($2!=NULL){addchild($$,$2);}}

    ;

varsandstatements: varsandstatements SEMICOLON                                  {$$=$1;}
    | varsandstatements vardeclaration SEMICOLON                                {$$=$1;
                                                                                    addchild($$,$2);}
    | varsandstatements statement SEMICOLON                                     {$$=$1;
                                                                                    addchild($$,$2);}                                
    | /* vazio*/                                                                {$$=NULL;}
    ;


statement: IDENTIFIER ASSIGN expr                                               {$$=newnode(Assign,NULL);
                                                                                    addchild($$,newnode(Identifier,$1));
                                                                                    addchild($$,$3);}
    | LBRACE statement2 RBRACE                                                  {$$=newnode(Block,NULL);
                                                                                    if($2!=NULL){addchild($$,$2);}}
    | IF expr LBRACE statement2 RBRACE statement3                               {$$=newnode(If,NULL);
                                                                                    if($2!=NULL){addchild($$,$2);}
                                                                                    addchild($$,$4);
                                                                                    if($6!=NULL){addchild($$,$6);}}
    | FOR statement4 LBRACE statement2 RBRACE                                   {$$=newnode(For,NULL);
                                                                                    if($2!=NULL){addchild($$,$2);}
                                                                                    if($4!=NULL){addchild($$,$4);}}
    | RETURN statement4                                                         {$$=newnode(Return,NULL);
                                                                                    if($2!=NULL){addchild($$,$2);}}
    | funcinvocation                                                            {$$=$1;}
    | parseargs                                                                 {$$=$1;}
    | PRINT LPAR printstatement RPAR                                            {$$=newnode(Print,NULL);
                                                                                    addchild($$,$3);}
    | error                                                                     {$$=NULL;}

statement2: statement2 statement SEMICOLON                                      {$$=$1;
                                                                                    addchild($$,$2);}
    |/*vazio*/                                                                  {$$=NULL;}
    ;

statement3: ELSE LBRACE statement2 RBRACE                                       {$$=$3;}
    |/*vazio*/                                                                  {$$=NULL;}
    ;

statement4: expr                                                                {$$=$1;}
    |/*vazio*/                                                                  {$$=NULL;}
    ;


printstatement: expr                                                            {$$=$1;}
    | STRLIT                                                                    {$$=newnode(StrLit,$1);}
    ;

parseargs: IDENTIFIER COMMA BLANKID ASSIGN PARSEINT LPAR CMDARGS LSQ expr RSQ RPAR      {$$=newnode(ParseArgs,NULL);
                                                                                            addchild($$,newnode(Identifier,$1));
                                                                                            addchild($$,$9);}
    | IDENTIFIER COMMA BLANKID ASSIGN PARSEINT LPAR error RPAR                          {$$=NULL;}
    ;

funcinvocation: IDENTIFIER LPAR expr funcinvocation2 RPAR                               {$$=newnode(Call,NULL);
                                                                                            addchild($$,newnode(Identifier,$1));
                                                                                            addchild($$,$3);
                                                                                            if($4!=NULL){addchild($$,$4);}}
    | IDENTIFIER LPAR RPAR                                                              {$$=newnode(Call,NULL);
                                                                                            addchild($$,newnode(Identifier,$1));}
    | IDENTIFIER LPAR error RPAR                                                        {$$=NULL;}
    ;

funcinvocation2: COMMA expr funcinvocation2                                             {$$=$2;
                                                                                            if($3!=NULL){addchild($$,$3);}}
    |/*vazio*/                                                                          {$$=NULL;}
    ;

expr: expr OR expr                                                                     {$$=newnode(Or,NULL);
                                                                                            addchild($$, $1);
                                                                                            addchild($$, $3);}
    | expr AND expr                                                                    {$$=newnode(And,NULL);
                                                                                            addchild($$, $1);
                                                                                            addchild($$, $3);}
    | expr LT expr                                                                      {$$=newnode(Lt,NULL);
                                                                                            addchild($$, $1);
                                                                                            addchild($$, $3);}
    | expr GT expr                                                                      {$$=newnode(Gt,NULL);
                                                                                            addchild($$, $1);
                                                                                            addchild($$, $3);}
    | expr EQ expr                                                                      {$$=newnode(Eq,NULL);
                                                                                            addchild($$, $1);
                                                                                            addchild($$, $3);}
    | expr NE expr                                                                      {$$=newnode(Ne,NULL);
                                                                                            addchild($$, $1);
                                                                                            addchild($$, $3);}
    | expr LE expr                                                                      {$$=newnode(Le,NULL);
                                                                                            addchild($$, $1);
                                                                                            addchild($$, $3);}
    | expr GE expr                                                                      {$$=newnode(Ge,NULL);
                                                                                            addchild($$, $1);
                                                                                            addchild($$, $3);}
    | expr PLUS expr                                                                    {$$=newnode(Add,NULL);
                                                                                            addchild($$, $1);
                                                                                            addchild($$, $3);}
    | expr MINUS expr                                                                   {$$=newnode(Sub,NULL);
                                                                                            addchild($$, $1);
                                                                                            addchild($$, $3);}
    | expr STAR expr                                                                    {$$=newnode(Mul,NULL);
                                                                                            addchild($$, $1);
                                                                                            addchild($$, $3);}
    | expr DIV expr                                                                     {$$=newnode(Div,NULL);
                                                                                            addchild($$, $1);
                                                                                            addchild($$, $3);}
    | expr MOD expr                                                                     {$$=newnode(Mod,NULL);
                                                                                            addchild($$, $1);
                                                                                            addchild($$, $3);}
    | NOT expr                                                                          {$$=newnode(Not,NULL);
                                                                                            addchild($$, $2);}
    | MINUS expr                                                                        {$$=newnode(Minus,NULL);
                                                                                            addchild($$, $2);}
    | PLUS expr                                                                         {$$=newnode(Plus,NULL);
                                                                                            addchild($$, $2);}
    | NATURAL                                                                           {$$ = newnode(Natural, $1);}
    | DECIMAL                                                                           {$$ = newnode(Decimal, $1);}
    | IDENTIFIER                                                                        {$$ = newnode(Identifier, $1);}
    | funcinvocation                                                                    {$$ = $1;}
    | LPAR expr RPAR                                                                    {$$ = $2;}
    | LPAR error RPAR                                                                   {$$ = NULL;}





%%

/* START subroutines section */

// all needed functions are collected in the .l and ast.* files
