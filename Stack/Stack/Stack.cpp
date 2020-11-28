#include <iostream>
#include "Stack.h"
#include "Calculator.h"

int main()
{
	Calculator calc;
	calc.SetFormula("2+2*2");
	if (calc.CheckBrackets() == true)
	{

	}
	else
	{
	}
}