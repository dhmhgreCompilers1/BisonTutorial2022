#pragma once
#include <map>
#include <string>
#include <stdlib.h>
#include "STNode.h"
class SymbolTable;
using namespace std;
extern SymbolTable* g_symbolTable;
struct Symbol{
	string m_name;
	IDENTIFIER *m_identifier;
	double m_value;

	Symbol();
};

class SymbolTable{
public:
	SymbolTable();
	Symbol* GetEntity(string name);

private:
	map<string, Symbol *> *m_namedEntities;


	
};
