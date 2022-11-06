#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	cout << "n = "; cin >> n;
	int i = 1;
	double x = 1, y = 1, sum = 0, t;
	do {
		sum += x / (1 + abs(y));
		t = x;
		x = 0.3 * t;
		y = t + y;
		i++;
		cout << "x = " << x << '\t' << "y = " << y << '\t' << "sum = " << sum << endl;
	} while (i <= n);

}