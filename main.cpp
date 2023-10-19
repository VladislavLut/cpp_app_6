#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

const double Pi = 3.14159265358979323846;

int main()
{
	system("chcp 1251");
	system("cls");
	double radius, volume;
	cout << "¬вед≥ть рад≥ус кул≥ у сантиметрах: ";
	cin >> radius;

	volume = (4.0 / 3.0) * Pi * pow(radius, 3);

	cout << "ќб'Їм кул≥: " << volume << " куб≥чних сантиметр≥в" << endl;

	return 0;
}