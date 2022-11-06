#include <iostream>
#include <cmath>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "");
	int a, b, c;

	cout << "Введите первую сторону треугольника: ";
	cin >> a;
	cout << endl;
	cout << "Введите вторую сторону треугольника: ";
	cin >> b;
	cout << endl;
	cout << "Введите третью сторону треугольника: ";
	cin >> c;
	cout << endl;
	
	int miniP = (a + b + c) / 2;
	int result = sqrt(miniP * ((miniP - a) * (miniP - b) * (miniP - c)));
	cout << "The square is: " << result << endl;

	return 0;
}