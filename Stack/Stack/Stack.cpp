#include "Stack.h"
#include <iostream>
#include <string>

using namespace std;

class Calculator
{
	string formula;
	Stack <char> br;
public:
	void SetFormula(string str)
	{
		formula = str;
	}
	bool CheckBrackets();
};


bool Calculator::CheckBrackets()
{
	Stack<char> s(formula.size());
	br = s;
	for (int i = 0; i < formula.size(); i++)
	{
		if (formula[i] == '(')
		{
			br.Push('(');
		}
		if (formula[i] == ')')
		{
			if (br.Empty())
			{
				return false;
			}
			else
			{
				br.Pop();
			}
		}
	}
	return br.Empty();
}

int main()
{
	Calculator c;
	c.SetFormula("((2+2)*2");
	if (c.CheckBrackets() == true)
	{

	}
	else
	{
		cout << "Wrong brackets.";
	}
}