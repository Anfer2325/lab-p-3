#include "pch.h"
#include "Addition.h"


Addition::Addition(Expression *e,Expression *i):ArithmeticExpression(e,i)

{


}

int Addition ::getValue()
{
	return e->getValue() + i->getValue();
}


