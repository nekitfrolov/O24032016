#include <iostream>
#include <cstdlib>
#include "MyClass.h"
using namespace std;

int main()
{
	int z, x;
	cout << "������� ����� ������� a = ";
	cin >> z;
	cout << "������� ����� ������� b = ";
	cin >> x;
	MyClass obj; //�������� �������
	obj.setDate(z, x);
	cout << "����� ���� �������� = "<<obj.sum() << endl;

	system("pause");
	return 0;
}