#include "pch.h"
#include "ArithmeticExpression.h"

int ArithmeticExpression::getValue()
{
	return 0;
}

ArithmeticExpression::ArithmeticExpression(){

}

ArithmeticExpression::ArithmeticExpression(Expression *E, Expression *I)
{
	this->e = E;
	this->i = I;

}

