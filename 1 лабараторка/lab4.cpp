#include <iostream>
#include <cmath>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "");
	int x, y, z;
	const double e = 2.718;
	cout << "ВВедите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	cout << "Введите z: ";
	cin >> z;

	double a = (sqrt(abs(x - 1)) - abs(pow(y, 1.0 / 3.0))) / (1 + (pow(x, 2) / 2)+(pow(y, 2) / 4)) ;
	double b = x * (atan(z) + exp(-(x + 3)));

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}