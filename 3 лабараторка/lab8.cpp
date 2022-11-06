#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	double x, sum = 0;
	cout << "X = ?, n = ?: ";
	cin >> x >> n;
	for (int i = 1; i <= n; i++) {
		sum += pow(sin(x), i);
	}
	cout << sum << endl;
}