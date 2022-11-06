#include <iostream>

using namespace std;

int main() {
	double y = 0;
	for (double x = 0; x <= 20; x+= 0.5) {
		y = 2 * pow(x, 2) + 15;
		cout << x << '\t' << y << endl;
	}
	return 0;
}