#include "pch.h"
#include "Expression.h"

#include "Number.h"
#include "Division.h"
#include "Multiplication.h"
#include "Substraction.h"
#include "Addition.h"
Expression::Expression()
{

}


int Expression::getValue()
{
	return 0;
}

Expression*  Expression::fromString(string expression)
{
	if (isNumber(expression))
	{
		int i = stoi(expression);
		
		return new Number(i);
	}
	else if (isAddition(expression))
	{
		string* add = split(expression, "+");
		
		return new Addition(Expression::fromString(add[0]),Expression::fromString(add[1]));
	}
	else if (isSubstracion(expression))
	{
		string* subs = split(expression, "-");

		return new Substraction(Expression::fromString(subs[0]), Expression::fromString(subs[1]));
	}
	else if (isMultiplication(expression))
	{
		string* mult = split(expression, "*");

		return new Multiplication(Expression::fromString(mult[0]), Expression::fromString(mult[1]));
	}
	else if (isDivision(expression))
	{
		string* div = split(expression, "/");

		return new Division(Expression::fromString(div[0]), Expression::fromString(div[1]));
	}
	return 0;
}

string * Expression::split(string expression, string operador)
{
	string* resultado = new string[2];

	size_t pos = expression.find(operador);
	string Izquierda = expression.substr(0, pos);
	string Derecha = expression.substr(pos + 1, expression.length());
	
	resultado[0] = Izquierda;
	resultado[1] = Derecha;
	return resultado;
}
bool Expression::isNumber(string expression)
{
	for (char& c : expression) {
		if (c == '+' || c == '-' || c == '/' || c == '*')
		{
			return false;
		}
	}
	return true;
}

bool Expression::isAddition(string expression)
{
	for (char& c : expression) {
		if (c == '+')
		{
			return true;
		}
	}
	return false;
}
bool Expression::isSubstracion(string expression)
{
	for (char& c : expression) {
		if (c == '-')
		{
			return true;
		}
	}
	return false;
}

bool Expression::isMultiplication(string expression)
{
	for (char& c : expression) {
		if (c == '*')
		{
			return true;
		}
	}
	return false;
}
bool Expression::isDivision(string expression)
{
	for (char& c : expression) {
		if (c == '/')
		{
			return true;
		}
	}
	return false;
}

