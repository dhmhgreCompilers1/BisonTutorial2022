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
%token NUMBER IDENTIFIER IF WHILE FOR BREAK CONTINUE RETURN
%token INT DOUBLE VOID STRING 
%nonassoc IFRULE
%right '='
%left OR
%left AND 
%nonassoc '<' '>' LE GE NE EQ
%left PLUS '-' 
%left '*' '/'
%nonassoc NOT UNARYOP ELSE
%type <node> NUMBER IDENTIFIER expr
%%

compileunit : declaration
			| statement
			| compileunit declaration
			| compileunit statement
			;

declaration : datadeclaration
			| functiondeclaration
			;

functiondeclaration : typespecifier IDENTIFIER '(' datadeclarations ')' statement
					;

datadeclarations : datadeclaration
				 | datadeclarations ',' datadeclaration
				 ;

datadeclaration : typespecifier IDENTIFIER ';'
				| typespecifier IDENTIFIER '=' datavalue
				;

typespecifier : INT
			  | DOUBLE
			  | STRING
			  | VOID
			  ;

datavalue : NUMBER
		  | STRING
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
