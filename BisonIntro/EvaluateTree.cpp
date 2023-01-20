#include "STNode.h"
#include "SymbolTable.h"

DATAVALUE STNode::EvaluateTree(STNode* parent) {
	list<STNode*>::iterator it;

	for (it = m_children->begin(); it != m_children->end(); it++) {
		(*it)->EvaluateTree(this);
	}
	return 0;
}

DATAVALUE IDENTIFIER::EvaluateTree(STNode* parent) {
	Symbol* s = g_symbolTable->GetEntity(m_name);
	return s->m_value;
}

DATAVALUE Addition::EvaluateTree(STNode* parent) {
	list<STNode*>::iterator it;
	double result = 0;
	it = m_children->begin();
	//result += (*it)->EvaluateTree(this);
	it++;
	//result += (*it)->EvaluateTree(this);
	return 0;
}

DATAVALUE Parenthesis::EvaluateTree(STNode* parent) {
	list<STNode*>::iterator it;
	it = m_children->begin();

	return (*it)->EvaluateTree(this);
}

DATAVALUE Assignment::EvaluateTree(STNode* parent) {
	list<STNode*>::iterator it;
	double result = 0;
	Symbol* variable;
	string name;

	it = m_children->begin();
	name = ((IDENTIFIER*)(*it))->Name();
	variable = g_symbolTable->GetEntity(name);
	it++;
	//result += (*it)->EvaluateTree(this);
	variable->m_value = result;
	printf("%s = %f\n", name.c_str(), result);
	return 0;
}