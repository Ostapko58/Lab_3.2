// Lab_03_2.cpp
// < Онишківа Остапа >
// Лабораторна робота No 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 5

#include<iostream>
using namespace std;

int main()
{
	double x; // вхідний аргумент
	double a; // вхідний параметр
	double b; // вхідний параметр
	double c; // вхідний параметр
	double F; // результат обчислення виразу
	cout << "x= "; cin >> x;
	cout << "a= "; cin >> a;
	cout << "b= "; cin >> b;
	cout << "c= "; cin >> c;

	// спосіб 1: розгалуження в скороченій формі
	if (x < 0 && b != 0)
	{
		F = a - x / (10 + b);
		cout << "x < 0 && b != 0" << endl;
	}
	if (x > 0 && b == 0)
	{
		F = (x - a) / (x - c);
		cout << "x > 0 && b == 0" << endl;
	}
	if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
	{
		F = 3 * x + 2 / c;
		cout << "!(x < 0 && b != 0) && !(x > 0 && b == 0)" << endl;
	}

	cout << "1)F = " << F << endl;

	// спосіб 2: розгалуження в повній формі
	if (x < 0 && b != 0)
	{
		F = a - x / (10 + b);
		cout << "x < 0 && b != 0" << endl;
	}
	else 
		if (x > 0 && b == 0)
		{
			F = (x - a) / (x - c);
			cout << "x > 0 && b == 0" << endl;
		}
		else
		{
			F = 3 * x + 2 / c;
			cout << "!(x < 0 && b != 0) && !(x > 0 && b == 0)" << endl;
		}

	cout << "2)F = " << F << endl;

	return 0;
}