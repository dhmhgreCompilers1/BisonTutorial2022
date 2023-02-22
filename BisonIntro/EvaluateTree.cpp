#include <iostream>

#include "STNode.h"
#include "SymbolTable.h"

TypedDataValue STNode::EvaluateTree(STNode* parent) {
	list<STNode*>::iterator it;

	for (it = m_children->begin(); it != m_children->end(); it++) {
		(*it)->EvaluateTree(this);
	}
	return 0;
}

TypedDataValue IDENTIFIER::EvaluateTree(STNode* parent) {
	Symbol* s = g_symbolTable->GetEntity(m_name);
	return s->m_value;
}

TypedDataValue NUMBER::EvaluateTree(STNode* parent) {
	return TypedDataValue(m_type, m_value);
}


TypedDataValue Addition::EvaluateTree(STNode* parent) {
	list<STNode*>::iterator it;
	TypedDataValue result = 0;
	it = m_children->begin();
	result = (*it)->EvaluateTree(this);
	it++;
	result = Evaluate(result, (*it)->EvaluateTree(this));
	return result;
}

TypedDataValue Addition::Evaluate(TypedDataValue v1, TypedDataValue v2) {
	TypedDataValue result = 0;
	switch (v1.m_type) {
	case  TS_INT:
		if (v2.m_type == TS_INT) {
			result.m_type = TS_INT;
			result.m_value = v1.m_value.i + v2.m_value.i;
			return result;
		}
		if (v2.m_type == TS_DOUBLE) {
			result.m_type = TS_DOUBLE;
			result.m_value = v1.m_value.i + v2.m_value.d;
			return result;
		}
		break;
	case TS_DOUBLE:
		if (v2.m_type == TS_INT) {
			result.m_type = TS_DOUBLE;
			result.m_value = v1.m_value.d + v2.m_value.i;
			return result;
		}
		if (v2.m_type == TS_DOUBLE) {
			result.m_type = TS_DOUBLE;
			result.m_value = v1.m_value.d + v2.m_value.d;
			return result;
		}
		break;
	default:
		cout << "Incompatible addition arguments. Not supported operation\n";
		exit(0);
	}

}

TypedDataValue Subtraction::EvaluateTree(STNode* parent) {
	list<STNode*>::iterator it;
	TypedDataValue result = 0;
	it = m_children->begin();
	result = (*it)->EvaluateTree(this);
	it++;
	result = Evaluate(result, (*it)->EvaluateTree(this));
	return result;
}

TypedDataValue Subtraction::Evaluate(TypedDataValue v1, TypedDataValue v2) {
	TypedDataValue result = 0;
	switch (v1.m_type) {
	case  TS_INT:
		if (v2.m_type == TS_INT) {
			result.m_type = TS_INT;
			result.m_value = v1.m_value.i - v2.m_value.i;
			return result;
		}
		if (v2.m_type == TS_DOUBLE) {
			result.m_type = TS_DOUBLE;
			result.m_value = v1.m_value.i - v2.m_value.d;
			return result;
		}
		break;
	case TS_DOUBLE:
		if (v2.m_type == TS_INT) {
			result.m_type = TS_DOUBLE;
			result.m_value = v1.m_value.d - v2.m_value.i;
			return result;
		}
		if (v2.m_type == TS_DOUBLE) {
			result.m_type = TS_DOUBLE;
			result.m_value = v1.m_value.d - v2.m_value.d;
			return result;
		}
		break;
	default:
		cout << "Incompatible subtration arguments. Not supported operation\n";
		exit(0);
	}

}

TypedDataValue Parenthesis::EvaluateTree(STNode* parent) {
	list<STNode*>::iterator it;
	it = m_children->begin();

	return (*it)->EvaluateTree(this);
}

TypedDataValue Assignment::EvaluateTree(STNode* parent) {
	list<STNode*>::iterator it;
	TypedDataValue result = 0;
	Symbol* variable;
	string name;


	it = m_children->begin();
	name = ((IDENTIFIER*)(*it))->Name();
	variable = g_symbolTable->GetEntity(name);
	it++;
	result = (*it)->EvaluateTree(this);
	variable->m_value = result;
	switch (variable->m_value.m_type) {
	case TS_INT:
		printf("%s = %d\n", name.c_str(), result.m_value.i);
		break;
	case TS_DOUBLE:
		printf("%s = %f\n", name.c_str(), result.m_value.d);
		break;
	}

	return 0;
}

TypedDataValue FunctionCall::EvaluateTree(STNode* parent) {
	return 0;
}

TypedDataValue FunctionCallArguments::EvaluateTree(STNode* parent) {
	return 0;
}


TypedDataValue LessEqual::EvaluateTree(STNode* parent) {
	list<STNode*>::iterator it;
	TypedDataValue result = 0;
	it = m_children->begin();
	result = (*it)->EvaluateTree(this);
	it++;
	result = Evaluate(result, (*it)->EvaluateTree(this));
	return result;
}

TypedDataValue LessEqual::Evaluate(TypedDataValue v1, TypedDataValue v2) {
	TypedDataValue result = 0;
	switch (v1.m_type) {
	case  TS_INT:
		if (v2.m_type == TS_INT) {
			result.m_type = TS_INT;
			result.m_value.i = v1.m_value.i <= v2.m_value.i;
			return result;
		}
		if (v2.m_type == TS_DOUBLE) {
			result.m_type = TS_INT;
			result.m_value.i = (double)v1.m_value.i <= v2.m_value.d;
			return result;
		}
		break;
	case TS_DOUBLE:
		if (v2.m_type == TS_INT) {
			result.m_type = TS_INT;
			result.m_value.i = v1.m_value.d <= (double)v2.m_value.i;
			return result;
		}
		if (v2.m_type == TS_DOUBLE) {
			result.m_type = TS_INT;
			result.m_value.i = v1.m_value.d <= v2.m_value.d;
			return result;
		}
		break;
	default:
		cout << "Incompatible less equal operator arguments. Not supported operation\n";
		exit(0);
	}

}

TypedDataValue Less::EvaluateTree(STNode* parent) {
	list<STNode*>::iterator it;
	TypedDataValue result = 0;
	it = m_children->begin();
	result = (*it)->EvaluateTree(this);
	it++;
	result = Evaluate(result, (*it)->EvaluateTree(this));
	return result;
}

TypedDataValue Less::Evaluate(TypedDataValue v1, TypedDataValue v2) {
	TypedDataValue result = 0;
	switch (v1.m_type) {
	case  TS_INT:
		if (v2.m_type == TS_INT) {
			result.m_type = TS_INT;
			result.m_value.i = v1.m_value.i < v2.m_value.i;
			return result;
		}
		if (v2.m_type == TS_DOUBLE) {
			result.m_type = TS_INT;
			result.m_value.i = (double)v1.m_value.i < v2.m_value.d;
			return result;
		}
		break;
	case TS_DOUBLE:
		if (v2.m_type == TS_INT) {
			result.m_type = TS_INT;
			result.m_value.i = v1.m_value.d < (double)v2.m_value.i;
			return result;
		}
		if (v2.m_type == TS_DOUBLE) {
			result.m_type = TS_INT;
			result.m_value.i = v1.m_value.d < v2.m_value.d;
			return result;
		}
		break;
	default:
		cout << "Incompatible less operator arguments. Not supported operation\n";
		exit(0);
	}

}

TypedDataValue WhileStatement::EvaluateTree(STNode* parent) {

	list<STNode*>::iterator expr = m_children->begin();
	list<STNode*>::iterator body = expr;
	body++;
	TypedDataValue result = 0;

	while ((*expr)->EvaluateTree(this)) {
		(*body)->EvaluateTree(this);
	}
	return 0;
}
