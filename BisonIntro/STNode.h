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
	NT_TYPESPECIFIER,
	NT_COMPILEUNIT,
	NT_DECLARATION,
	NT_FUNCTIONDECLARATION,
	NT_DATADECLARATIONS,
	NT_DATADECLARATION,
	NT_COMPOUNDSTATEMENT,
	NT_BREAKSTATEMENT,
	NT_RETURNSTATEMENT,
	NT_CONTINUESTATEMENT,
	NT_EXPRESSIONSTATEMENT,
	NT_STATEMENT,
	NT_EMPTYSTATEMENT,
	NT_WHILESTATEMENT,
	NT_FORSTATEMENT,
	NT_FORPRIMITIVE,
	NT_IFSTATEMENT,
	NT_DATAVALUE,
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
	NT_NOTEQUAL,
	NT_AND,
	NT_OR,
	NT_NOT,
	NT_UNARYPLUS,
	NT_UNARYMINUS,
	NT_PARENTHESIS
} NODETYPE;

enum TYPESPECIFIER
{
	TS_VOID, TS_DOUBLE,TS_INT, TS_STRING
};



class STNode {

public:
	STNode(NODETYPE type);
	~STNode();
	void AddChild(STNode* node);
	virtual string GetGraphVizLabel();

	virtual void PrintSyntaxTree(ofstream* dotfile, STNode* parent);

	virtual double EvaluateTree(STNode* parent);

protected:
	list<STNode*>* m_children;
	string m_nodeName;
	int m_serialNumber;
	NODETYPE m_type;
	static int ms_serialNumberCounter;
};

extern STNode* g_root;

class CompileUnit : public STNode {
public:
	CompileUnit(STNode* left, STNode* right=nullptr);
	double EvaluateTree(STNode* parent) override;
private:
};

class Declaration : public STNode {
public:
	Declaration(STNode* arg);
	double EvaluateTree(STNode* parent) override;
private:
};

class FunctionDeclaration : public STNode
{
public:
	FunctionDeclaration(STNode* arg1, STNode* arg2,
		STNode* arg3, STNode* arg4);
	double EvaluateTree(STNode* parent) override;
private:
};

class DataDeclarations : public STNode{
public:
	DataDeclarations(STNode* arg1, STNode* arg2 = nullptr);
	double EvaluateTree(STNode* parent) override;
private:
};
class DataDeclaration : public STNode {
public:
	DataDeclaration(STNode* arg1, STNode* arg2, STNode* arg3 = nullptr);
	double EvaluateTree(STNode* parent) override;
private:
};

class Statement : public STNode{
public:
	Statement(STNode* arg1);
	double EvaluateTree(STNode* parent) override;
private:
};

class CompoundStatement : public STNode {
public:
	CompoundStatement(STNode* arg1=nullptr);
	double EvaluateTree(STNode* parent) override;
private:
};

class BreakStatement : public STNode {
public:
	BreakStatement();
	double EvaluateTree(STNode* parent) override;
private:
};

class ReturnStatement : public STNode {
public:
	ReturnStatement(STNode* arg1 = nullptr);
	double EvaluateTree(STNode* parent) override;
private:
};

class ContinueStatement : public STNode {
public:
	ContinueStatement(STNode* arg1 = nullptr);
	double EvaluateTree(STNode* parent) override;
private:
};

class ExpressionStatement : public STNode {
public:
	ExpressionStatement(STNode* arg1);
	double EvaluateTree(STNode* parent) override;
private:
};

class EmptyStatement : public STNode {
public:
	EmptyStatement();
	double EvaluateTree(STNode* parent) override;
private:
};

class WhileStatement : public STNode {
public:
	WhileStatement(STNode *cond, STNode*st);
	double EvaluateTree(STNode* parent) override;
private:
};

class ForStatement : public STNode {
public:
	ForStatement(STNode* forpr1, STNode* forpr2, STNode *stat);
	ForStatement(STNode* forpr1, STNode* forpr2,STNode *expr, STNode* stat);
	double EvaluateTree(STNode* parent) override;
private:
};

class ForPrimitive : public STNode {
public:
	ForPrimitive(STNode* arg);
	double EvaluateTree(STNode* parent) override;
private:
};

class IfStatement : public STNode {
public:
	IfStatement(STNode* expr, STNode* trstat, STNode* fstat=nullptr);
	double EvaluateTree(STNode* parent) override;
private:
};

class DataValue : public STNode {
public:
	DataValue(STNode* arg);
	double EvaluateTree(STNode* parent) override;
private:
};

/*

typespecifier : INT
			  | DOUBLE
			  | STRING
			  | VOID
			  ;
			  
 *
 */


class Addition : public STNode {
public:
	Addition(STNode* left, STNode* right);
	double EvaluateTree(STNode* parent) override;
private:
};

class Parenthesis : public STNode {
public:
	Parenthesis(STNode* arg);
	double EvaluateTree(STNode* parent) override;
private:
};

class Assignment : public STNode {
public:
	Assignment(STNode* id, STNode* expr);
	double EvaluateTree(STNode* parent) override;
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

//| expr AND expr{ $$ = new And($1,$3); }
//| expr OR expr{ $$ = new Or($1,$3); }
//| NOT expr{ $$ = new Not($2); }
//| PLUS expr % prec UNARYOP{ $$ = new Plus($2); }
//| '-' expr % prec UNARYOP{ $$ = new Minus($2); }
class And : public STNode {
public:
	And(STNode* left, STNode* right);
private:
};

class Or : public STNode {
public:
	Or(STNode* left, STNode* right);
private:
};

class Not : public STNode {
public:
	Not(STNode* right);
private:
};

class Plus : public STNode {
public:
	Plus(STNode* right);
private:
};

class Minus : public STNode {
public:
	Minus(STNode* right);
private:
};

class NUMBER : public STNode {
	double m_value;
	string m_number;
public:
	NUMBER(char* number);
	string GetGraphVizLabel() override;
	double EvaluateTree(STNode* parent) override;
private:
};

class IDENTIFIER : public STNode {
	string m_name;
public:
	IDENTIFIER(string name);
	string Name() { return m_name; }
	string GetGraphVizLabel() override;
	double EvaluateTree(STNode* parent) override;
private:
};

class TypeSpecfifier : public STNode {
	enum TYPESPECIFIER m_typespec;
public:
	TypeSpecfifier(enum TYPESPECIFIER m_typespec);
	enum TYPESPECIFIER Type() { return m_typespec; }
	string GetGraphVizLabel() override;
	double EvaluateTree(STNode* parent) override;
private:
};


#endif

