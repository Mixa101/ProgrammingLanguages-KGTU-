#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	int a, b, c;
	cout << "введите стороны a, b, c: ";
	cin >> a; cin >> b; cin >> c;
	if (a + b > c && a + c > b && b + c > a) {
		cout << "Такой треугольник существует!";
	}
	else {
		cout << "Такого треугольника не существует!";
	}
	return 0;
}