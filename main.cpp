#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	system("chcp 1251");
	system("cls");
	int year;

	cout << "Введіть номер року: ";
	cin >> year;
	bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	int daysinYear = 365 + isLeapYear;
	cout << " У " << year << " році = " << daysinYear << " днів " << endl;
	return 0;
}