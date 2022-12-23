#include "SymbolTable.h"

SymbolTable* g_symbolTable = nullptr;

Symbol::Symbol(){	
}

SymbolTable::SymbolTable(){
	m_namedEntities = new map<string, Symbol* >();
}
Symbol* SymbolTable::GetEntity(string name){
	Symbol* newSymbol;
	if ( m_namedEntities->find(name) != m_namedEntities->end()) {
		return (* m_namedEntities)[name];
	}
	else{
		newSymbol = new Symbol();
		newSymbol->m_identifier = new IDENTIFIER(name);
		newSymbol->m_name = name;
		newSymbol->m_value = 0;
		(* m_namedEntities)[name] = newSymbol;
	}
	return newSymbol;
}