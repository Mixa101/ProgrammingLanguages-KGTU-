#include <iostream>
#include <cmath>

using namespace std;

void main() {
	setlocale(LC_ALL, "");
	double x, y, t;
	cout << "Введите X, Y = ";
	cin >> x >> y;
	if (x > y) {
		t = x;
		x = (x * y) * 2;
		y = (t - y) / 2;
	}
	else {
		t = y;
		y = (y * x) * 2;
		x = (t - x) / 2;
	}
	cout << "x = " << x << '\t' << "y = " << y;
}