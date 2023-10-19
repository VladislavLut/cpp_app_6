#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	system("chcp 1251");
	system("cls");
	double lenght, width, height, volume;
	cout << "¬вед≥ть довжину паралелеп≥педа у сантиметрах: ";
	cin >> lenght;
	cout << "¬вед≥ть ширину паралелеп≥педа у сантиметрах: ";
	cin >> width;
	cout << "¬вед≥ть висоту паралелеп≥педа у сантиметрах: ";
	cin >> height;
	volume = lenght * width * height;
	cout << "ќб'Їм паралелеп≥педа: " << volume << " куб≥чних сантиметр≥в " << endl;
	return 0;
}