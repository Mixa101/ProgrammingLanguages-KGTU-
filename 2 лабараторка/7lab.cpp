#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	double x, y, z;
	cout << "Введите x, y, z = ";
	cin >> x >> y >> z;
	if (x + y + z < 1) {
		if (z < x && x < y || z < y && y < x) {
			z = (x + y) / 2;
		}
		else if (x > y) {
			y = (x + z) / 2;
		}
		else {
			x = (y + z) / 2;
		}
	}
	else {
		if ( x > y) {
			y = (x + z) / 2;
		}
		else{
			( y > x) {
				x = (y + z) / 2;
			}
		}
		return 0;
	}
	cout << "x = " << x << '\t' << "y = " << y << '\t' << "z = " << z;
	return 0;

}