#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	system("chcp 1251");
	system("cls");
	double lenght, width, height, volume;
	cout << "������ ������� ������������� � �����������: ";
	cin >> lenght;
	cout << "������ ������ ������������� � �����������: ";
	cin >> width;
	cout << "������ ������ ������������� � �����������: ";
	cin >> height;
	volume = lenght * width * height;
	cout << "��'�� �������������: " << volume << " ������� ���������� " << endl;
	return 0;
}