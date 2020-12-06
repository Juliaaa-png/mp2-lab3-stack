#pragma once
#include <string>
#include "Stack.h"
using namespace std;

class Calculator
{
	string formula;
	Stack <char> st_c;
	Stack <double> st_d;
	string infix;
	string postfix;
	int Priority(char elem);
public:
	Calculator() :st_c(10), st_d(10)
	{
		infix = "";
		postfix = "";
	}
	Calculator(const Calculator& calc) 
	{
		infix = calc.infix;
		postfix = calc.postfix;
		st_c = calc.st_c;
		st_d = calc.st_d;
	}
	~Calculator() {};                     
	bool CheckBrackets();      
	void SetFormula(string str);
	string GetInfix();   
	string GetPostfix();
	void SetExpression(string expr);                   
	void ToPostfix();                     
	double CalcPostfix();                 
};