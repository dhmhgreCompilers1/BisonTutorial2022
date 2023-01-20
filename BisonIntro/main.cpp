#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "SymbolTable.h"
#include "Intro.tab.h"
using namespace std;
extern FILE* yyin;
extern int yyparse();

class A
{
	
};


void main(int argc, char *argv[]){
	ofstream* dotfile;
	g_symbolTable = new SymbolTable;
	dotfile = new ofstream("SyntaxTree.dot", std::ofstream::out);
	cout << "THis is a message";
	FILE* f;
	void* r;
	yy::parser parser;
	fopen_s(&f, argv[1], "r");
	yyin = f;
	parser.parse();
	r = g_root;
	g_root->PrintSyntaxTree(dotfile, nullptr);
	dotfile->close();
	system("dot.exe -Tgif SyntaxTree.dot -o SyntaxTree.gif");

	class A a;
}