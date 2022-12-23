#ifndef STNODE
#define STNODE
#include <list>
#include <string>
#include <fstream>
using namespace std;

typedef enum nodetype
{
	NT_NUMBER,
	NT_IDENTIFIER,
	NT_ADDITION,
	NT_ASSIGNMENT,
	NT_SUBTRACTION,
	NT_MULTIPLICATION,
	NT_DIVISION,
	NT_EXPRLIST,
	NT_LESSEQUAL,
	NT_GREATEREQUAL,
	NT_LESS,
	NT_GREATER,
	NT_EQUAL,
	NT_NOTEQUAL
} NODETYPE;


class STNode{

public:
	STNode(NODETYPE type);
	~STNode();
	void AddChild(STNode* node);
	virtual string GetGraphVizLabel();

	virtual void PrintSyntaxTree(ofstream* dotfile,STNode* parent);
	
private:
	list<STNode*> *m_children;
	string m_nodeName;
	int m_serialNumber;
	NODETYPE m_type;
	static int ms_serialNumberCounter;
};

extern STNode* g_root;

class ExprList : public STNode {
public:
	ExprList(STNode* expr);
	ExprList(STNode* explist, STNode* expr);
private:
};

class Addition : public STNode{
public:
	Addition(STNode *left, STNode *right);
private:
};

class Assignment : public STNode {
public:
	Assignment(STNode* id, STNode* expr);
private:
};

class Subtraction : public STNode {
public:
	Subtraction(STNode* left, STNode* right);
private:
};

class Multiplication : public STNode {
public:
	Multiplication(STNode* left, STNode* right);
private:
};

class LessEqual : public STNode {
public:
	LessEqual(STNode* left, STNode* right);
private:
};

class GreaterEqual : public STNode {
public:
	GreaterEqual(STNode* left, STNode* right);
private:
};

class Less : public STNode {
public:
	Less(STNode* left, STNode* right);
private:
};
class Greater : public STNode {
public:
	Greater(STNode* left, STNode* right);
private:
};

class Equal : public STNode {
public:
	Equal(STNode* left, STNode* right);
private:
};
class NotEqual : public STNode {
public:
	NotEqual(STNode* left, STNode* right);
private:
};

class Division : public STNode {
public:
	Division(STNode* left, STNode* right);
private:
};

class NUMBER : public STNode {
	string m_number;
public:
	NUMBER(char *number);
	string GetGraphVizLabel() override;
private:
};

class IDENTIFIER : public STNode {
	string m_name;
public:
	IDENTIFIER(string name);
	string GetGraphVizLabel() override;
private:
};


#endif

