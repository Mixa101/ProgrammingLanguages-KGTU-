#include <iostream>
#include <cmath>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "");
	const double PI = 3.14;
	int R = 20;
	int r;
	cout << "Введите внешний радиус кольца: ";
	cin >> r;
	
	double S = PI * (pow(r, 2) - pow(R, 2));

	cout << "Площадь кольца равна: " << S << endl;
	return 0;
}