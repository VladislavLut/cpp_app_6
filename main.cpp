#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	system("chcp 1251");
	system("cls");
	int year;

	cout << "������ ����� ����: ";
	cin >> year;
	bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	int daysinYear = 365 + isLeapYear;
	cout << " � " << year << " ���� = " << daysinYear << " ��� " << endl;
	return 0;
}