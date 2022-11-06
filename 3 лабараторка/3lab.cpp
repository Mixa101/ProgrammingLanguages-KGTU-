#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double a = 0.3, n = 10, t;
	for (int i = 0; i <= 10; i++) {
		if (sin((pow(i, 2) + 1) / n) > 0) {
			t = a * sin((pow(i, 2) + 1) / n);
			cout << t << endl;
		}
		else {
			t = cos(i + 1 / n);
			cout << t << endl;
		}
	}

	return 0;
}