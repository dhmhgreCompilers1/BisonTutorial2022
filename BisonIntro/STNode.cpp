#include "STNode.h"
const char* g_nodenames[] = {
	"NT_NUMBER",
	"NT_IDENTIFIER",
	"NT_TYPESPECIFIER",
	"NT_COMPILEUNIT",
	"NT_DECLARATION",
	"NT_FUNCTIONDECLARATION",
	"NT_DATADECLARATIONS",
	"NT_DATADECLARATION",
	"NT_COMPOUNDSTATEMENT",
	"NT_STATEMENTLIST",
	"NT_BREAKSTATEMENT",
	"NT_RETURNSTATEMENT",
	"NT_CONTINUESTATEMENT",
	"NT_EXPRESSIONSTATEMENT",
	"NT_STATEMENT",
	"NT_EMPTYSTATEMENT",
	"NT_WHILESTATEMENT",
	"NT_FORSTATEMENT",
	"NT_FORPRIMITIVE",
	"NT_IFSTATEMENT",
	"NT_DATAVALUE",
	"NT_ADDITION",
	"NT_ASSIGNMENT",
	"NT_SUBTRACTION",
	"NT_MULTIPLICATION",
	"NT_DIVISION",
	"NT_EXPRLIST",
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
	else {
		(*dotfile) << "digraph G {\n";
	}

	for (it = m_children->begin(); it != m_children->end(); it++) {
		(*it)->PrintSyntaxTree(dotfile, this);
	}

	if (parent == nullptr) {
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
	STNode* arg3, STNode* arg4) :
	STNode(NT_FUNCTIONDECLARATION) {
	AddChild(arg1);
	AddChild(arg2);
	AddChild(arg3);
	AddChild(arg4);
}

DataDeclarations::DataDeclarations(STNode* arg1, STNode* arg2)
	:STNode(NT_DATADECLARATIONS) {
	AddChild(arg1);
	if (arg2 != nullptr) {
		AddChild(arg2);
	}
}

DataDeclaration::DataDeclaration(STNode* arg1, STNode* arg2, STNode* arg3)
	:STNode(NT_DATADECLARATION) {
	AddChild(arg1);
	AddChild(arg2);
	if (arg3 != nullptr) {
		AddChild(arg3);
	}
}

Statement::Statement(STNode* arg1) :
	STNode(NT_STATEMENT) {
	AddChild(arg1);
}

CompoundStatement::CompoundStatement(STNode* arg1)
	:STNode(NT_COMPOUNDSTATEMENT) {
	if (arg1 != nullptr) {
		AddChild(arg1);
	}
}

StatementList::StatementList(STNode* arg1,STNode *arg2)
	:STNode(NT_STATEMENTLIST) {
	AddChild(arg1);
	if (arg2 != nullptr) {
		AddChild(arg2);
	}
}
BreakStatement::BreakStatement()
	:STNode(NT_BREAKSTATEMENT) {
}

ReturnStatement::ReturnStatement(STNode* arg1)
	:STNode(NT_RETURNSTATEMENT) {
	if (arg1 != nullptr) {
		AddChild(arg1);
	}
}

ContinueStatement::ContinueStatement()
	:STNode(NT_CONTINUESTATEMENT) {

}

ExpressionStatement::ExpressionStatement(STNode* arg1)
	:STNode(NT_EXPRESSIONSTATEMENT) {
	AddChild(arg1);
}

EmptyStatement::EmptyStatement()
	:STNode(NT_EMPTYSTATEMENT) {
}

WhileStatement::WhileStatement(STNode* cond, STNode* st)
	:STNode(NT_WHILESTATEMENT) {
	AddChild(cond);
	AddChild(st);
}

ForStatement::ForStatement(STNode* forpr1, STNode* forpr2, STNode* stat)
	:STNode(NT_FORSTATEMENT) {
	AddChild(forpr1);
	AddChild(forpr2);
	AddChild(stat);
}

ForStatement::ForStatement(STNode* forpr1, STNode* forpr2, STNode* expr, STNode* stat)
	:STNode(NT_FORSTATEMENT) {
	AddChild(forpr1);
	AddChild(forpr2);
	AddChild(expr);
	AddChild(stat);
}

ForPrimitive::ForPrimitive(STNode* arg)
	:STNode(NT_FORPRIMITIVE) {
	AddChild(arg);
}

IfStatement::IfStatement(STNode* expr, STNode* trstat, STNode* fstat)
	:STNode(NT_IFSTATEMENT) {
	AddChild(expr);
	AddChild(trstat);
	if (fstat != nullptr) {
		AddChild(fstat);
	}
}

CDataValue::CDataValue(STNode* arg)
	:STNode(NT_DATAVALUE) {
	AddChild(arg);
}

Addition::Addition(STNode* left, STNode* right) :
	STNode(NT_ADDITION) {
	AddChild(left);
	AddChild(right);
}

Parenthesis::Parenthesis(STNode* arg) : STNode(NT_PARENTHESIS) {
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

CTypeSpecifier::CTypeSpecifier(TYPESPECIFIER typespec)
	:STNode(NT_TYPESPECIFIER) {
	m_typespec = typespec;
}

NUMBER::NUMBER(TYPESPECIFIER type, char* number) :STNode(NT_NUMBER) {
	m_number = number;
	m_type = type;
	switch (type) {
	case TS_INT:
		m_value.i = atoi(number);
		break;
	case TS_DOUBLE:
		m_value.d = atof(number);
		break;
	default:
		;
	}

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

string CTypeSpecifier::GetGraphVizLabel(){
	switch (m_typespec) {
	case TS_INT:
		return "int";
		break;
	case TS_DOUBLE:
		return "double";
		break;
	case TS_STRING:
		return "string";
		break;
	case TS_VOID:
		return "void";
		break;
	default:
		return "";
	}	
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

