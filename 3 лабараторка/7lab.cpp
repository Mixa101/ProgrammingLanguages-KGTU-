#include <iostream>

using namespace std;

int main() {
	double a, x = 0;
	cout << "a = ";
	cin >> a;
	int i = 1;
	do {
		x += 1.0 + (1.0 / i);
		i++;
	} while (x <= a);

	cout << x << endl;
	return 0;
}