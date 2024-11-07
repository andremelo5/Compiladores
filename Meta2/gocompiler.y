/* START definitions section -- C code delimited by %{ ... %} and token declarations */

%{
#include "ast.h"
#include <stddef.h>

int yylex(void);
void yyerror(char *);


struct node *program;


%}

%token SEMICOLON COMMA BLANKID ASSIGN STAR DIV MINUS PLUS EQ GE GT LBRACE LE LPAR LSQ LT MOD NE NOT AND OR RBRACE RPAR RSQ PACKAGE RETURN ELSE FOR IF VAR INT FLOAT32 BOOL STRING PRINT PARSEINT FUNC CMDARGS RESERVED 


%token<lexeme> IDENTIFIER NATURAL DECIMAL STRLIT
%type<node> program  declarations vardeclaration  varspec varspec2 type funcdeclaration parameters parameters2 funcbody  varsandstatements  statement statement2  parseargs funcinvocation funcinvocation2 expr


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
                                                                    if($4!=NULL){addchild($$,$4);}}
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

funcdeclaration: FUNC IDENTIFIER LPAR parameters RPAR type funcbody                                         {$$=newnode(FuncDecl,NULL);
                                                                                                                struct node *funcHeader = newnode (FuncHeader,NULL);
                                                                                                                    addchild(funcHeader,newnode(Identifier, $2));
                                                                                                                    addchild(funcHeader,$6);
                                                                                                                struct node *funcParams = newnode(FuncParams, NULL);
                                                                                                                    if ($4!=NULL){addchild(funcParams,$4);}
                                                                                                                addchild(funcHeader,funcParams);
                                                                                                                addchild($$,funcHeader);
                                                                                                                addchild($$,$7);
                                                                                                            }
    | FUNC IDENTIFIER LPAR RPAR type funcbody                                                               {$$=newnode(FuncDecl,NULL);
                                                                                                                struct node *funcHeader = newnode (FuncHeader,NULL);
                                                                                                                    addchild(funcHeader,newnode(Identifier, $2));
                                                                                                                    addchild(funcHeader,$5);
                                                                                                                addchild($$,funcHeader);
                                                                                                                addchild($$,$6);
                                                                                                            }
    | FUNC IDENTIFIER LPAR parameters RPAR  funcbody                                                        {$$=newnode(FuncDecl,NULL);
                                                                                                                struct node *funcHeader = newnode (FuncHeader,NULL);
                                                                                                                    addchild(funcHeader,newnode(Identifier, $2));
                                                                                                                struct node *funcParams = newnode(FuncParams, NULL);
                                                                                                                    if ($4!=NULL){addchild(funcParams,$4);}
                                                                                                                addchild(funcHeader,funcParams);
                                                                                                                addchild($$,funcHeader);
                                                                                                                addchild($$,$6);
                                                                                                            }
    | FUNC IDENTIFIER LPAR  RPAR  funcbody                                                                  {$$=newnode(FuncDecl,NULL);
                                                                                                                struct node *funcHeader = newnode (FuncHeader,NULL);
                                                                                                                    addchild(funcHeader,newnode(Identifier, $2));
                                                                                                                addchild($$,funcHeader);
                                                                                                                addchild($$,$5);
                                                                                                            }
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

funcbody: LBRACE varsandstatements RBRACE                                       {$$=$2;}

    ;

varsandstatements: varsandstatements SEMICOLON                                  {$$=$1;}
    | varsandstatements vardeclaration SEMICOLON                                {
                                                                                    if($1==NULL) {
                                                                                        $$ = newnode(FuncBody, NULL);
                                                                                    } else {
                                                                                        $$ = $1;
                                                                                    }
                                                                                    addchild($$, $2);
                                                                                }
    | varsandstatements statement SEMICOLON                                     {
                                                                                    if($1==NULL) {
                                                                                        $$ = newnode(FuncBody, NULL);
                                                                                    } else {
                                                                                        $$ = $1;
                                                                                    }
                                                                                    addchild($$, $2);
                                                                                }
    | /* vazio*/                                                                {$$=NULL;}
    ;


statement: IDENTIFIER ASSIGN expr                                               {$$=newnode(Assign,NULL);
                                                                                    addchild($$,newnode(Identifier,$1));
                                                                                    addchild($$,$3);}
    | LBRACE statement2 RBRACE                                                  {
                                                                                    if($2!=NULL){
                                                                                        if (countchildren($2) > 1){
                                                                                            $$=newnode(Block,NULL);
                                                                                            addchild($$,$2);
                                                                                        }else{
                                                                                            $$=$2;
                                                                                        }
                                                                                    }else{
                                                                                        $$=NULL;
                                                                                    }
                                                                                }
    | IF expr LBRACE statement2 RBRACE ELSE LBRACE statement2 RBRACE            {
                                                                                    $$=newnode(If,NULL);
                                                                                    addchild($$,$2);
                                                                                    addchild($$, newnode(Block, NULL));
                                                                                    if($4!=NULL){addchild($$->children->next->node,$4);} //$$->children->next->node --> filho de block
                                                                                    addchild($$, newnode(Block, NULL));
                                                                                    if($8!=NULL){addchild($$->children->next->next->node,$8);}//$$->children->next->next->node --> filho do segundo block
                                                                                }
    | IF expr LBRACE statement2 RBRACE                                          {
                                                                                    $$=newnode(If,NULL);
                                                                                    addchild($$,$2);
                                                                                    addchild($$,newnode(Block,NULL));
                                                                                    if($4!=NULL){addchild($$->children->next->node,$4);}
                                                                                }                                                                                
    | FOR expr LBRACE statement2 RBRACE                                         {$$=newnode(For,NULL);
                                                                                    addchild($$,$2);
                                                                                    addchild($$,newnode(Block,NULL));
                                                                                    if($4!=NULL){addchild($$->children->next->node,$4);}
                                                                                }

    | FOR  LBRACE statement2 RBRACE                                             {$$=newnode(For,NULL);
                                                                                    addchild($$,newnode(Block,NULL));
                                                                                    if($3!=NULL){addchild($$->children->node,$3);}
                                                                                }
    | RETURN expr                                                               {$$=newnode(Return,NULL);
                                                                                    addchild($$,$2);}

    | RETURN                                                                    {$$=newnode(Return,NULL);}

    | funcinvocation                                                            {$$=$1;}
    | parseargs                                                                 {$$=$1;}
    | PRINT LPAR expr RPAR                                                      {$$=newnode(Print,NULL);
                                                                                    addchild($$,$3);
                                                                                }
    | PRINT LPAR STRLIT RPAR                                                    {$$=newnode(Print,NULL);
                                                                                    addchild($$,newnode(StrLit,$3));
                                                                                }
    | error                                                                     {$$=NULL;}

statement2: statement2 statement SEMICOLON                                      {if ($1 == NULL) {
                                                                                        $$ = newnode(Block, NULL);
                                                                                    } else {
                                                                                        $$ = $1;
                                                                                    }
                                                                                    if ($2 != NULL) {
                                                                                        addchild($$, $2);
                                                                                    }}
    |/*vazio*/                                                                  {$$=NULL;}
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
