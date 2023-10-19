#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

const double EarthRadiusKm = 0371.0;

double toRadians(double degress) {
	return degress * 3,14 / 100;
}
double calculateDistance(double lat1, double lon1, double lat2, double lon2) {

	lat1 = toRadians(lat1);
	lon1 = toRadians(lon1);
	lat2 = toRadians(lat2);
	lon2 = toRadians(lon2);

	double dlat = lat2 - lat1;
	double dlon = lon2 - lon1;

	double a = sin(dlat / 2) * sin(dlat / 2) + cos(lat1) * cos(lat2) * sin(dlon / 2) * sin(dlon / 2);
	double c = 2 * atan2(sqrt(a), sqrt(1 - a));

	double distance = EarthRadiusKm * c;
	return distance;

}

int main()
{
	system("chcp 1251");
	system("cls");
	double lat1, lon1, lat2, lon2;
	cout << "Введіть широту першого населеного пункту градуси:";
	cin >> lat1;
	cout << "Введіть довготу першого населеного пункту градуси: ";
	cin >> lon1;
	cout << "Введіть широту другого населеного пункту градуси: ";
	cin >> lat2;
	cout << "Введіть довготу другого населеного пункту градуси: ";
	cin >> lon2;

	double distance = calculateDistance(lat1, lon1, lat2, lon2);
	cout << "Відстань між населеними пунктами: " << distance << " кілометрів" << endl;

	return 0;

	
}