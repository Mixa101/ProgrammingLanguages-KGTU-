#include <iostream>
#include <cmath>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "");
	int a, b, c;
	const double PI = 3.1416;
	cout << "Введите основание a: ";
	cin >> a;
	cout << "Введите основание b: ";
	cin >> b;
	cout << "Введите угол a: ";
	cin >> c;

	double rad = (c * PI) / 180.0;
	//cout << rad;
	
	double S = (1.0 / 2.0 * (pow(b,2) - pow(a,2))) * tan(rad);

	cout << endl << S;


	return 0; }