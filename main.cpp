#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	system("chcp 1251");
	system("cls");
	int grivna, kopiyka;
	cout << "Введіть гривні: ";
	cin >> grivna;
	cout << "Введіть копійки: ";
	cin >> kopiyka;
	grivna += kopiyka / 100;
	kopiyka = kopiyka % 100;
	cout << "Правильна сумма: " << grivna << " грн. " << kopiyka << " коп. " << endl;
	return 0;
}