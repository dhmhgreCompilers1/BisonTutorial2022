%option noyywrap

%{
#include "Intro.tab.h"
#include "SymbolTable.h"
#include <string>
#define YY_DECL int yylex(yy::parser::semantic_type *yylval)
typedef yy::parser::token TOKEN;

%}

%%
 std::string x;
 Symbol *s;
"int" {return TOKEN::INT_TYPE;}
"double" {return TOKEN::DOUBLE_TYPE;}
"void" {return TOKEN::VOID_TYPE;}
"string" {return TOKEN::STRING_TYPE;}
"+" { return TOKEN::PLUS; }
"-" { return '-';}
"*" { return '*';}
"/" { return '/';}
";" { return ';';}
"=" { return '=';}
"<" { return '<';}
">" { return '>';}
"(" { return '(';}
")" { return ')';}
"," { return ',';}
"<=" { return TOKEN::LE;}
">=" { return TOKEN::GE;}
"==" { return TOKEN::EQ;}
"!=" { return TOKEN::NE;}
"&&" { return TOKEN::AND;}
"||" { return TOKEN::OR;}
"!" { return TOKEN::NOT;}

0|[1-9][0-9]* {		yylval->node=new NUMBER(TS_INT,yytext);
					return TOKEN::INT;}

[a-zA-Z][a-zA-Z0-9_]* { x = string(yytext);
						s= g_symbolTable->GetEntity(x);
						yylval->node=s->m_identifier;
						return TOKEN::IDENTIFIER; }
[ \t\n\r]

%%





