#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	system("chcp 1251");
	system("cls");
	int grivna, kopiyka;
	cout << "������ �����: ";
	cin >> grivna;
	cout << "������ ������: ";
	cin >> kopiyka;
	grivna += kopiyka / 100;
	kopiyka = kopiyka % 100;
	cout << "��������� �����: " << grivna << " ���. " << kopiyka << " ���. " << endl;
	return 0;
}