#include "STNode.h"
const char* g_nodenames[] = {
	"NUMBER",
	"IDENTIFIER",
	"COMPILEUNIT",
	"DECLARATION",
	"FUNCTIONDECLARATION",
	"DATADECLARATIONS",
	"DATADECLARATION",
	"STATEMENT",
	"COMPOUNDSTATEMENT",
	"BREAKSTATEMENT",
	"ADDITION",
	"ASSIGNMENT",
	"SUBTRACTION",
	"MULTIPLICATION",
	"DIVISION",
	"EXPRLIST",
	"NT_LESSEQUAL",
	"NT_GREATEREQUAL",
	"NT_LESS",
	"NT_GREATER",
	"NT_EQUAL",
	"NT_NOTEQUAL",
	"NT_AND",
	"NT_OR",
	"NT_NOT",
	"NT_UNARYPLUS",
	"NT_UNARYMINUS",
	"NT_PARENTHESIS"
};

int STNode::ms_serialNumberCounter = 0;
STNode* g_root = NULL;


STNode::STNode(NODETYPE type) {
	m_serialNumber = ms_serialNumberCounter++;
	m_type = type;
	m_children = new list<STNode*>();
	m_nodeName = g_nodenames[type];
}

string STNode::GetGraphVizLabel() {
	return m_nodeName + std::to_string(m_serialNumber);
}

void STNode::PrintSyntaxTree(ofstream* dotfile, STNode* parent) {
	list<STNode*>::iterator it;

	if (parent != nullptr) {
		(*dotfile) << "\t\"" << parent->GetGraphVizLabel() <<
			"\"->\"" << GetGraphVizLabel() << "\";\n";
	}
	else
	{
		(*dotfile) << "digraph G {\n";
	}

	for (it = m_children->begin(); it != m_children->end(); it++) {
		(*it)->PrintSyntaxTree(dotfile, this);
	}

	if (parent == nullptr)
	{
		(*dotfile) << "}";
	}
}

STNode::~STNode() {
}



void STNode::AddChild(STNode* node) {
	m_children->push_back(node);
}


CompileUnit::CompileUnit(STNode* left, STNode* right) :
	STNode(NT_COMPILEUNIT) {
	AddChild(left);
	if (right != nullptr) {
		AddChild(right);
	}
}

Declaration::Declaration(STNode* arg) :
	STNode(NT_DECLARATION) {
	AddChild(arg);	
}

FunctionDeclaration::FunctionDeclaration(STNode* arg1, STNode* arg2,
	STNode* arg3, STNode* arg4):
STNode(NT_FUNCTIONDECLARATION){
	AddChild(arg1);
	AddChild(arg2);
	AddChild(arg3);
	AddChild(arg4);
}

DataDeclarations::DataDeclarations(STNode* arg1, STNode* arg2)
	:STNode(NT_DATADECLARATIONS){
	AddChild(arg1);
	if (arg2 != nullptr) {
		AddChild(arg2);
	}
}

DataDeclaration::DataDeclaration(STNode* arg1, STNode* arg2,  STNode* arg3)
	:STNode(NT_DATADECLARATION) {
	AddChild(arg1);
	AddChild(arg2);
	if (arg3 != nullptr) {
		AddChild(arg3);
	}
}

Statement::Statement(STNode* arg1):
STNode(NT_STATEMENT){
	AddChild(arg1);
}

CompoundStatement::CompoundStatement(STNode* arg1)
	:STNode(NT_COMPOUNDSTATEMENT){
	if (arg1 != nullptr) {
		AddChild(arg1);
	}
}

BreakStatement::BreakStatement()
	:STNode(NT_BREAKSTATEMENT) {	
}

Addition::Addition(STNode* left, STNode* right) :
	STNode(NT_ADDITION) {
	AddChild(left);
	AddChild(right);
}

Parenthesis::Parenthesis(STNode* arg) : STNode(NT_PARENTHESIS){
	AddChild(arg);
}

Assignment::Assignment(STNode* id, STNode* expr) :
	STNode(NT_ASSIGNMENT) {
	AddChild(id);
	AddChild(expr);
}

Subtraction::Subtraction(STNode* left, STNode* right) :
	STNode(NT_SUBTRACTION) {
	AddChild(left);
	AddChild(right);
}
Multiplication::Multiplication(STNode* left, STNode* right) :
	STNode(NT_MULTIPLICATION) {
	AddChild(left);
	AddChild(right);
}
Division::Division(STNode* left, STNode* right) :
	STNode(NT_DIVISION) {
	AddChild(left);
	AddChild(right);
}

NUMBER::NUMBER(char* number) :STNode(NT_NUMBER) {
	m_number = number;
	m_value = atoi(number);
}

IDENTIFIER::IDENTIFIER(string name) :STNode(NT_IDENTIFIER) {
	m_name = name;
}

string NUMBER::GetGraphVizLabel() {
	return STNode::GetGraphVizLabel() + "_" + m_number;
}

string IDENTIFIER::GetGraphVizLabel() {
	return STNode::GetGraphVizLabel() + "_" + m_name;
}

LessEqual::LessEqual(STNode* left, STNode* right) :
	STNode(NT_LESSEQUAL) {
	AddChild(left);
	AddChild(right);
}

GreaterEqual::GreaterEqual(STNode* left, STNode* right) :
	STNode(NT_GREATEREQUAL) {
	AddChild(left);
	AddChild(right);
}

Less::Less(STNode* left, STNode* right) :
	STNode(NT_LESS) {
	AddChild(left);
	AddChild(right);
}

Greater::Greater(STNode* left, STNode* right) :
	STNode(NT_GREATER) {
	AddChild(left);
	AddChild(right);
}

Equal::Equal(STNode* left, STNode* right) :
	STNode(NT_EQUAL) {
	AddChild(left);
	AddChild(right);
}

NotEqual::NotEqual(STNode* left, STNode* right) :
	STNode(NT_NOTEQUAL) {
	AddChild(left);
	AddChild(right);
}

And::And(STNode* left, STNode* right) :
	STNode(NT_AND) {
	AddChild(left);
	AddChild(right);
}

Or::Or(STNode* left, STNode* right) :
	STNode(NT_OR) {
	AddChild(left);
	AddChild(right);
}
Not::Not(STNode* right) :
	STNode(NT_NOT) {
	AddChild(right);
}

Plus::Plus(STNode* right) :
	STNode(NT_UNARYPLUS) {
	AddChild(right);
}

Minus::Minus(STNode* right) :
	STNode(NT_UNARYMINUS) {
	AddChild(right);
}

