// prak.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double x;
	double e = 2.71;
	cout << "Введите число ";
	cin >> x;
	if (x >= -2 && x <= 2)
	{
		cout << (sqrt(x) * tan(x));
	}
	else if (x > 2)
	{
		cout << (pow(e, x + 1) + pow(x, 1 / 3));
	}
	else if (x < -2)
	{
		cout << (sin(sqrt(x)) + log(abs(x)));
	}
	else
		cout << "Не соответствует условию";
	
}