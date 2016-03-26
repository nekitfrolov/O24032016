#include <iostream>
#include <cstdlib>
#include "MyClass.h"
using namespace std;

int main()
{
	int z, x;
	cout << "Введите длину отрезка a = ";
	cin >> z;
	cout << "Введите длину отрезка b = ";
	cin >> x;
	MyClass obj; //создание объекта
	obj.setDate(z, x);
	cout << "Сумма длин отрезков = "<<obj.sum() << endl;

	system("pause");
	return 0;
}