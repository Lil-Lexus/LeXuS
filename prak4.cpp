// ghgh.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	double k;
	cout << "Напишите число для которого будет выполняться действие: ";
	cin >> k;
		cout << 1 + (1/(k*k));
}