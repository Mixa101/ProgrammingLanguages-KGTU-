#include <iostream>
#include <cmath>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "");
	int a;
	cout << "Введите сторону треугольника: ";
	cin >> a;

	double h = (a * sqrt(3)) / 2;
	cout << "Высота треугольника: " << h << endl;
	
	double s = (1.0 / 2.0) * a * h;
	cout << "Площадь : " << s << endl;

	double vpis = s / ((a * 3) / 2);
	cout << "Радиус вписанной окружности: " << vpis << endl;

	double opis = pow(a, 3) / (4 * s);
	cout << "радиус описанной окружности: " << opis << endl;


	return 0;
}