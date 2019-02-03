#pragma once
#include "Expression.h"

class ArithmeticExpression:public Expression
{
public:
	
 	ArithmeticExpression();
	ArithmeticExpression(Expression * , Expression *);

	Expression *e;
	Expression *i;

	int getValue() override;
};

