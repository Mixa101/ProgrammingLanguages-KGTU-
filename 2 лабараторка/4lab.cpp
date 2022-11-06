#include <iostream>
#include <cmath>

using namespace std;


double foo(double a) {
	if (a <= 0) {
		return a;
	}
	else {
		return a * a;
	}
}
void main() {
	setlocale(LC_ALL, "");
	cout << "Введите три числа: ";
	double a, b, c;
	cin >> a; cin >> b; cin >> c;
	cout << foo(a) << endl;
	cout << foo(b) << endl;
	cout << foo(c) << endl;
}