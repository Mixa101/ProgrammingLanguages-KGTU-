#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	double x, result;
	const double PI = 3.14;
	cout << "Введите x: ";
	cin >> x;
	if (x <= 0) {
		cout << "f(x) = " << 0 << endl;
		return 0;
	}
	else if (x > 0 && x <= 1) {
		result = pow(x, 2) - x;
		cout << "f(x) = " << result << endl;
		return 0;
	}
	else {
		result = pow(x, 2) - sin(PI * pow(x, 2));
		cout << "f(x) = " << result << endl;
		return 0;
	}
}