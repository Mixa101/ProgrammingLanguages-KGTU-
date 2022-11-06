#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double a = 2.6, b = 5, S;
	for (double x = 0; x <= 10; x += 0.5) {
		if (x < 2) {
			S = a + (b / exp(x)) + cos(x);
			cout << S << endl;
		}
		else if (x >= 6) {
			S = (a + b) / (x + 1);
			cout << S << endl;
		}
		else {
			S = exp(x) + sin(x);
			cout << S << endl;
		}
	}
	return 0;
}