// prak2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int k;

	cout << "Введите оценку"; 
	cin >> k;

	switch (k)
	{
	case 1: cout << "Плохо"; break;
	case 2: cout << "Неудовлетворительно"; break;
	case 3: cout << "Удовлетворительно"; break;
	case 4: cout << "Хорошо"; break;
	case 5: cout << "Отлично"; break;
	default: cout << "Ошибка";
	}

	cout<< endl << endl;

	system("pause");
}