%language "C++"
%{
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "STNode.h"
#include "Intro.tab.h"
extern int yylex(yy::parser::semantic_type *yylval,yy::parser::location_type *yylloc);
using namespace std;
%}

%code requires{
#include "STNode.h"
}

%verbose
%locations

%initial-action {
// Filename for locations here
@$.begin.filename = @$.end.filename = new std::string("test.txt");
}
%error-verbose

%union{
	STNode *node;
};

%start compileunit
%token IDENTIFIER IF WHILE FOR BREAK CONTINUE RETURN
%token INT_TYPE DOUBLE_TYPE VOID_TYPE STRING_TYPE 
%token STRING NUMBER
%nonassoc IFRULE
%right '='
%left OR
%left AND 
%nonassoc '<' '>' LE GE NE EQ
%left PLUS '-' 
%left '*' '/'
%nonassoc NOT UNARYOP ELSE
%type <node> NUMBER STRING IDENTIFIER expr compileunit declaration statement datadeclaration functiondeclaration
typespecifier datadeclarations datavalue exprstatement emptystatement whilestatement ifstatement
forstatement breakstatement returnstatement continuestatement compoundstatement forprimitive statementlist funargs
statements functionbody functionparameters
%%

compileunit : declaration  { $$ =g_root= new CompileUnit($1); }
			| statement    { $$ =g_root= new CompileUnit($1); }
			| compileunit declaration { $$ =g_root= new CompileUnit($1,$2); }
			| compileunit statement { $$ =g_root= new CompileUnit($1,$2); }
			;

declaration : datadeclaration		{ $$ = new Declaration($1);  }
			| functiondeclaration   { $$ = new Declaration($1);  }
			;

functiondeclaration : typespecifier IDENTIFIER '(' functionparameters ')' '{' functionbody '}' { $$ = new FunctionDeclaration($1,$2,$4,$7);  }
					| typespecifier IDENTIFIER '(' ')' '{' functionbody '}' { $$ = new FunctionDeclaration($1,$2,$6);  }
					| typespecifier IDENTIFIER '(' ')' '{'  '}' { $$ = new FunctionDeclaration($1,$2);  }
					| typespecifier IDENTIFIER '(' functionparameters ')' '{'  '}' { $$ = new FunctionDeclaration($1,$2,$4);  }
					;

functionparameters : typespecifier IDENTIFIER	{ $$ = new FunctionParameters($1,$2);  }
					| functionparameters ',' typespecifier IDENTIFIER { $$ = new FunctionParameters($1,$3,$4);  }
					;


functionbody: statements				{ $$ = new FunctionBody($1);  }
			| datadeclarations			{ $$ = new FunctionBody($1);  }
			| datadeclarations statements { $$ = new FunctionBody($1,$2);  }
			;

statements : statement				{ $$ = new Statements($1);  }
			| statements statement  { $$ = new Statements($1,$2);  }
			;

datadeclarations : datadeclaration						{ $$ = new DataDeclarations($1);  }
				 | datadeclarations ',' datadeclaration { $$ = new DataDeclarations($1,$3);  }
				 ;

datadeclaration : typespecifier IDENTIFIER ';'				{ $$ = new DataDeclaration($1,$2);  }
				| typespecifier IDENTIFIER '=' datavalue ';'   { $$ = new DataDeclaration($1,$2,$4);  }
				;

typespecifier : INT_TYPE	 { $$ = new CTypeSpecifier(TS_INT); }
			  | DOUBLE_TYPE  { $$ = new CTypeSpecifier(TS_DOUBLE); }
			  | STRING_TYPE  { $$ = new CTypeSpecifier(TS_STRING); }
			  | VOID_TYPE    { $$ = new CTypeSpecifier(TS_VOID); }
			  ;

datavalue : NUMBER  {$$=$1;}
		  | STRING  {$$=$1; }
		  ;

statement : exprstatement	  { $$ = new Statement($1);  }
		  | emptystatement    { $$ = new Statement($1);  }
		  | whilestatement    { $$ = new Statement($1);  }
		  | ifstatement       { $$ = new Statement($1);  }
		  | forstatement      { $$ = new Statement($1);  }
		  | breakstatement    { $$ = new Statement($1);  }
		  | returnstatement   { $$ = new Statement($1);  }
		  | continuestatement { $$ = new Statement($1);  }
		  | compoundstatement { $$ = new Statement($1);  }
		  ;

compoundstatement : '{' statementlist '}' { $$ = new CompoundStatement($2);  }
				  | '{' '}'				  { $$ = new CompoundStatement();  }
				  ;

statementlist : statement				{ $$ = new StatementList($1);  }
			 | statementlist statement	{ $$ = new StatementList($1,$2);  }
			 ;


breakstatement : BREAK ';' { $$ = new BreakStatement();  }
			   ;

returnstatement : RETURN expr ';' { $$ = new ReturnStatement($2);  }
				| RETURN ';'	  { $$ = new ReturnStatement();  }
			    ;

continuestatement : CONTINUE ';' { $$ = new ContinueStatement();  }
			      ;

exprstatement : expr ';' { $$ = new ExpressionStatement($1);  }
			  ;

emptystatement : ';'	{ $$ = new EmptyStatement();  }
			   ;

whilestatement : WHILE '(' expr ')' statement  { $$ =new WhileStatement($3,$5); }
			   ;

forstatement : FOR '(' forprimitive forprimitive ')' statement		{ $$ =new ForStatement($3, $4, $6); }
			 | FOR '(' forprimitive forprimitive expr ')' statement { $$ =new ForStatement($3, $4, $5,$7); }
			 ;

forprimitive : exprstatement   {$$ =new ForPrimitive($1);}
			  | emptystatement {$$ =new ForPrimitive($1);}
			  ;

ifstatement : IF '(' expr ')' statement %prec IFRULE	{ $$= new IfStatement($3,$5); }
			| IF '(' expr ')' statement ELSE statement  { $$= new IfStatement($3,$5,$7); }
			;


expr : NUMBER       { $$ = $1; }
     | IDENTIFIER   { $$ = $1; }
	 | IDENTIFIER '(' funargs ')'  { $$ = new FunctionCall($1,$3); }
	 | '(' expr ')' { $$ = new Parenthesis($2); }
	 | IDENTIFIER '=' expr { $$ = new Assignment($1,$3);}
	 | expr PLUS expr { $$ = new Addition($1,$3);  }
	 | expr '-' expr  { $$ = new Subtraction($1,$3);  }
	 | expr '*' expr  { $$ = new Multiplication($1,$3);  }
	 | expr '/' expr  { $$ = new Division($1,$3);  }
	 | expr '<' expr  { $$ = new Less($1,$3);  }
	 | expr '>' expr  { $$ = new Greater($1,$3);  }
	 | expr LE expr  { $$ = new LessEqual($1,$3);  }
	 | expr GE expr  { $$ = new GreaterEqual($1,$3);  }
	 | expr EQ expr  { $$ = new Equal($1,$3);  }
	 | expr NE expr  { $$ = new NotEqual($1,$3);  }
	 | expr AND expr  { $$ = new And($1,$3);  }
	 | expr OR expr  { $$ = new Or($1,$3);  }
	 | NOT expr  { $$ = new Not($2);  }
	 | PLUS expr %prec UNARYOP  { $$ = new Plus($2);  }
	 | '-' expr %prec UNARYOP  { $$ = new Minus($2);  }
	 ;

funargs : expr				{ $$ = new FunctionCallArguments($1); }
		| funargs ',' expr	{ $$ = new FunctionCallArguments($1,$3); }
		;


%%

namespace yy{
	void parser::error(yy::location const &loc, const string &message){
		std::cerr << "error at " << loc << ": " << message << std::endl;
	}
}
