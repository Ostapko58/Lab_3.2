// Lab_03_2.cpp
// < ������� ������ >
// ����������� ������ No 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 5

#include<iostream>
using namespace std;

int main()
{
	double x; // ������� ��������
	double a; // ������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double F; // ��������� ���������� ������
	cout << "x= "; cin >> x;
	cout << "a= "; cin >> a;
	cout << "b= "; cin >> b;
	cout << "c= "; cin >> c;

	// ����� 1: ������������ � ��������� ����
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

	// ����� 2: ������������ � ����� ����
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