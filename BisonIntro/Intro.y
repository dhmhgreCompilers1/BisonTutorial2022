%language "C++"
%{
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "STNode.h"
#include "Intro.tab.h"
extern int yylex(yy::parser::semantic_type *yylval);
using namespace std;
%}

%code requires{
#include "STNode.h"
}

%verbose
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
forstatement breakstatement returnstatement continuestatement compoundstatement
%%

compileunit : declaration  { $$ =g_root= new CompileUnit($1); }
			| statement    { $$ =g_root= new CompileUnit($1); }
			| compileunit declaration { $$ =g_root= new CompileUnit($1,$2); }
			| compileunit statement { $$ =g_root= new CompileUnit($1,$2); }
			;

declaration : datadeclaration		{ $$ = new Declaration($1);  }
			| functiondeclaration   { $$ = new Declaration($1);  }
			;

functiondeclaration : typespecifier IDENTIFIER '(' datadeclarations ')' statement { $$ = new FunctionDeclaration($1,$2,$4,$6);  }
					;

datadeclarations : datadeclaration						{ $$ = new DataDeclarations($1);  }
				 | datadeclarations ',' datadeclaration { $$ = new DataDeclarations($1,$3);  }
				 ;

datadeclaration : typespecifier IDENTIFIER ';'				{ $$ = new DataDeclaration($1,$2);  }
				| typespecifier IDENTIFIER '=' datavalue    { $$ = new DataDeclaration($1,$2,$4);  }
				;

typespecifier : INT_TYPE	 { $$ = new CTypeSpecifier(TS_INT); }
			  | DOUBLE_TYPE  { $$ = new CTypeSpecifier(TS_DOUBLE); }
			  | STRING_TYPE  { $$ = new CTypeSpecifier(TS_STRING); }
			  | VOID_TYPE    { $$ = new CTypeSpecifier(TS_VOID); }
			  ;

datavalue : NUMBER  {$$=$1;}
		  | STRING  {$$=$1; }
		  ;

statement : exprstatement	
		  | emptystatement
		  | whilestatement
		  | ifstatement
		  | forstatement
		  | breakstatement
		  | returnstatement
		  | continuestatement
		  | compoundstatement
		  ;

compoundstatement : '{' statement '}'
				  | '{' '}'
				  ;



breakstatement : BREAK ';'
			   ;

returnstatement : RETURN expr ';'
				| RETURN ';'
			    ;

continuestatement : CONTINUE ';'
			      ;

exprstatement : expr ';'
			  ;

emptystatement : ';'
			   ;

whilestatement : WHILE '(' expr ')' statement
			   ;

forstatement : FOR '(' forprimitive forprimitive ')' statement
			 | FOR '(' forprimitive forprimitive expr ')' statement
			 ;

forprimitive : exprstatement
			  | emptystatement
			  ;

ifstatement : IF '(' expr ')' statement %prec IFRULE
			| IF '(' expr ')' statement ELSE statement
			;


expr : NUMBER       { $$ = $1; }
     | IDENTIFIER   { $$ = $1; }
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


%%

namespace yy{
	void parser::error(yy::location const &loc, const string &message){
		std::cerr << "error at " << loc << ": " << message << std::endl;
	}
}
