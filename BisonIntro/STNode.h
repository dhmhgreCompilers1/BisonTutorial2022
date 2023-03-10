#ifndef STNODE
#define STNODE
#include <list>
#include <string>
#include <fstream>
class IDENTIFIER;
class CTypeSpecifier;
using namespace std;

typedef union DataValue {
	int i;
	double d;
	DataValue() {}
	DataValue(int _i) :i(_i) {}
	DataValue(double _d) :d(_d) {}
}DATAVALUE;

typedef enum TypeSpecifier {
	TS_VOID, TS_DOUBLE, TS_INT, TS_STRING
} TYPESPECIFIER;

struct TypedDataValue {
	TYPESPECIFIER m_type;
	DATAVALUE m_value;
	TypedDataValue() {}
	TypedDataValue(int i) {
		m_type = TS_INT;
		m_value.i = i;
	}
	TypedDataValue(double d) {
		m_type = TS_DOUBLE;
		m_value.d = d;
	}
	TypedDataValue(TYPESPECIFIER ts, DATAVALUE v) {
		m_type = ts;
		m_value = v;
	}
	operator bool() {
		switch (m_type) {
		case TS_INT:
			return (bool)m_value.i;
			break;
		case TS_DOUBLE:
			return (bool)m_value.d;
			break;
		default:
			return false;
		}
	}
};


typedef enum nodetype {
	NT_NUMBER,
	NT_IDENTIFIER,
	NT_TYPESPECIFIER,
	NT_COMPILEUNIT,
	NT_DECLARATION,
	NT_FUNCTIONDECLARATION,
	NT_FUNPREFIX,
	NT_DATADECLARATIONS,
	NT_DATADECLARATION,
	NT_COMPOUNDSTATEMENT,
	NT_STATEMENTLIST,
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
	NT_FUNCTIONCALL,
	NT_FUNCTIONCALLARGUMENTS,
	NT_FUNCTIONPARAMETERS,
	NT_FUNCTIONBODY,
	NT_STATEMENTS,
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





class STNode {

public:
	STNode(NODETYPE type);
	~STNode();
	void AddChild(STNode* node);
	virtual string GetGraphVizLabel();

	virtual void PrintSyntaxTree(ofstream* dotfile, STNode* parent);

	virtual TypedDataValue EvaluateTree(STNode* parent);

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
	CompileUnit(STNode* left, STNode* right = nullptr);
	//TypedDataValue EvaluateTree(STNode* parent) override;
private:
};

class Declaration : public STNode {
public:
	Declaration(STNode* arg);
	//TypedDataValue EvaluateTree(STNode* parent) override;
private:
};

class FunctionDeclaration : public STNode {
public:
	FunctionDeclaration(STNode* arg1, STNode* arg2,
		STNode* arg3, STNode* arg4);
	FunctionDeclaration(STNode* arg1, STNode* arg2,
		STNode* arg3);
	FunctionDeclaration(STNode* arg1, STNode* arg2);
	//TypedDataValue EvaluateTree(STNode* parent) override;
private:
};

class FunctionPrefix : public STNode {
	CTypeSpecifier* m_type_specifier;
	IDENTIFIER *m_functionName;
public:
	FunctionPrefix(STNode* arg1, STNode* arg2);
	CTypeSpecifier* TypeSpecifier() { return m_type_specifier; }
	IDENTIFIER* FunName() { return m_functionName; }
	//TypedDataValue EvaluateTree(STNode* parent) override;
private:
};

class FunctionParameters : public STNode {
public:
	FunctionParameters(STNode* arg1, STNode* arg2);
	FunctionParameters(STNode* arg1, STNode* arg2,
		STNode* arg3);
	//TypedDataValue EvaluateTree(STNode* parent) override;
private:
};

class FunctionBody : public STNode {
public:
	FunctionBody(STNode* arg1);
	FunctionBody(STNode* arg1, STNode* arg2);
	//TypedDataValue EvaluateTree(STNode* parent) override;
private:
};

class Statements : public STNode {
public:
	Statements(STNode* arg1);
	Statements(STNode* arg1, STNode* arg2);
	//TypedDataValue EvaluateTree(STNode* parent) override;
private:
};

class DataDeclarations : public STNode {
public:
	DataDeclarations(STNode* arg1, STNode* arg2 = nullptr);
	//TypedDataValue EvaluateTree(STNode* parent) override;
private:
};
class DataDeclaration : public STNode {
public:
	DataDeclaration(STNode* arg1, STNode* arg2, STNode* arg3 = nullptr);
	//TypedDataValue EvaluateTree(STNode* parent) override;
private:
};

class Statement : public STNode {
public:
	Statement(STNode* arg1);
	//TypedDataValue EvaluateTree(STNode* parent) override;
private:
};

class CompoundStatement : public STNode {
public:
	CompoundStatement(STNode* arg1 = nullptr);
	//TypedDataValue EvaluateTree(STNode* parent) override;
private:
};

class StatementList : public STNode {
public:
	StatementList(STNode* arg0, STNode* arg1 = nullptr);
	//TypedDataValue EvaluateTree(STNode* parent) override;
private:
};

class BreakStatement : public STNode {
public:
	BreakStatement();
	//TypedDataValue EvaluateTree(STNode* parent) override;
private:
};

class ReturnStatement : public STNode {
public:
	ReturnStatement(STNode* arg1 = nullptr);
	//TypedDataValue EvaluateTree(STNode* parent) override;
private:
};

class ContinueStatement : public STNode {
public:
	ContinueStatement();
	//TypedDataValue EvaluateTree(STNode* parent) override;
private:
};

class ExpressionStatement : public STNode {
public:
	ExpressionStatement(STNode* arg1);
	//TypedDataValue EvaluateTree(STNode* parent) override;
private:
};

class EmptyStatement : public STNode {
public:
	EmptyStatement();
	//TypedDataValue EvaluateTree(STNode* parent) override;
private:
};

class WhileStatement : public STNode {
public:
	WhileStatement(STNode* cond, STNode* st);
	TypedDataValue EvaluateTree(STNode* parent) override;
private:
};

class ForStatement : public STNode {
public:
	ForStatement(STNode* forpr1, STNode* forpr2, STNode* stat);
	ForStatement(STNode* forpr1, STNode* forpr2, STNode* expr, STNode* stat);
	//TypedDataValue EvaluateTree(STNode* parent) override;
private:
};

class ForPrimitive : public STNode {
public:
	ForPrimitive(STNode* arg);
	//TypedDataValue EvaluateTree(STNode* parent) override;
private:
};

class IfStatement : public STNode {
public:
	IfStatement(STNode* expr, STNode* trstat, STNode* fstat = nullptr);
	//TypedDataValue EvaluateTree(STNode* parent) override;
private:
};

class CDataValue : public STNode {
public:
	CDataValue(STNode* arg);
	//TypedDataValue EvaluateTree(STNode* parent) override;
private:
};

class Addition : public STNode {
public:
	Addition(STNode* left, STNode* right);
	TypedDataValue EvaluateTree(STNode* parent) override;
	TypedDataValue Evaluate(TypedDataValue v1, TypedDataValue v2);
private:
};

class Parenthesis : public STNode {
public:
	Parenthesis(STNode* arg);
	TypedDataValue EvaluateTree(STNode* parent) override;
private:
};

class Assignment : public STNode {
public:
	Assignment(STNode* id, STNode* expr);
	TypedDataValue EvaluateTree(STNode* parent) override;
private:
};

class FunctionCall : public STNode {
public:
	FunctionCall(STNode* id, STNode* funargs);
	TypedDataValue EvaluateTree(STNode* parent) override;
private:
};

class FunctionCallArguments : public STNode {
public:
	FunctionCallArguments(STNode* expr);
	FunctionCallArguments(STNode* funargs, STNode* expr);
	TypedDataValue EvaluateTree(STNode* parent) override;
private:
};


class Subtraction : public STNode {
public:
	Subtraction(STNode* left, STNode* right);
	TypedDataValue EvaluateTree(STNode* parent) override;
	TypedDataValue Evaluate(TypedDataValue v1, TypedDataValue v2);
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
	TypedDataValue EvaluateTree(STNode* parent) override;
	TypedDataValue Evaluate(TypedDataValue v1, TypedDataValue v2);
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
	TypedDataValue EvaluateTree(STNode* parent) override;
	TypedDataValue Evaluate(TypedDataValue v1, TypedDataValue v2);
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
	DATAVALUE m_value;
	TYPESPECIFIER m_type;
	string m_number;
public:
	NUMBER(TYPESPECIFIER type, char* number);
	string GetGraphVizLabel() override;
	TypedDataValue EvaluateTree(STNode* parent) override;
private:
};

class IDENTIFIER : public STNode {
	string m_name;

public:
	IDENTIFIER(string name);
	string Name() { return m_name; }
	string GetGraphVizLabel() override;
	TypedDataValue EvaluateTree(STNode* parent) override;
private:
};

class CTypeSpecifier : public STNode {
	TYPESPECIFIER m_typespec;
public:
	CTypeSpecifier(TYPESPECIFIER m_typespec);
	TYPESPECIFIER Type() { return m_typespec; }
	string GetGraphVizLabel() override;
	//TypedDataValue EvaluateTree(STNode* parent) override;
private:
};


#endif

