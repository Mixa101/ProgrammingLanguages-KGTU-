#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	int a, b, c, d, x1, x2;

	cout << "Введите a, b, c: ";
	cin >> a; cin >> b; cin >> c;
	d = pow(b, 2) - 4 * a * c;
	if (d > 0) {
		x1 = (-b - sqrt(d)) / 2 * a;
		x2 = (-b + sqrt(d)) / 2 * a;

		cout << "Уравнение имеет 2 корня x1, x2 >> " << x1 << " " << x2 << endl;
		return 0;
	}
	else if (d == 0) {
		x1 = (-b) / 2 * a;
		cout << "Уравнение имеет один корень x: " << x1 << endl;
		return 0;
	}
	else {
		cout << "уравнение не имеет корней" << endl;
		return 0;
	}
}