#include <iostream>

using namespace std;

int fib(int n) {
	int a = 1, b = 1, c;
	for (int i = 3; i <= n; i++) {
		c = a + b;
		a = b; b = c;
	}
	return c;
}

int main() {
	setlocale(LC_ALL, "");

	cout << "Fib of 6 = " << fib(23);
}