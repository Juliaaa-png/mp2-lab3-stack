#include <iostream>
#include "Stack.h"
#include "Calculator.h"
#include <cstdlib>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	string exp;
	Calculator calc;
	cout << "������� ���������: " << endl;
	cin >> exp;
	calc.SetFormula(exp);
	try
	{
		cout << "�������������� ���������: " << calc.GetInfix() << endl;
		calc.ToPostfix();
		cout << "���������: " << calc.CalcPostfix() << endl;
	}
	catch (const char* n) { std::cout << n << std::endl; }

	system("pause");
	return 0;
}