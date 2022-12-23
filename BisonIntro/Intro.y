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

%start exprlist
%token NUMBER IDENTIFIER PLUS
%nonassoc '<' '>' LE GE NE EQ
%left PLUS '-' 
%left '*' '/'
%type <node> exprlist NUMBER IDENTIFIER expr
%%

exprlist : expr ';'          { g_root=$$=new ExprList($1); }  
		 | exprlist expr ';' { g_root=$$=new ExprList($1,$2); }
		 ;

expr : NUMBER       { $$ = $1; }
     | IDENTIFIER   { $$ = $1; }
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



	 ;


%%

namespace yy{
	void parser::error(yy::location const &loc, const string &message){
		std::cerr << "error at " << loc << ": " << message << std::endl;
	}
}
