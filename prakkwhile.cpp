// l.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	double i, n, a, x;
	cout << "Решение задания №2";
	n = 0;
	x = 0;
	a = -41;
	i = 0;
	while (a >= -121)
	{
		x = x + a;
		a = a - 1;
		i++;
	}
	n = x / i;
	cout << "Ответ: ";
	cout << n;
}