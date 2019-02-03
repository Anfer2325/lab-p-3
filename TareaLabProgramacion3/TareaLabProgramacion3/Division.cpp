#include "pch.h"
#include "Division.h"


Division::Division(Expression *e,Expression *i):ArithmeticExpression(e,i)
{

}


int Division::getValue()
{
	return e->getValue() / i->getValue();
}
