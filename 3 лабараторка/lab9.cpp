#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	double sum = 1;
	cout << "n = ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum *= 1 + (1 / pow(i, 2));
	}
	cout << "a = " << sum << endl;
	sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += 1 / sin(i);
	}
	cout << "b = " << sum << endl;
	sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += sqrt(2);
	}
	cout << "c = " << sum << endl;
	sum = 1;
	for (int i = 1; i <= n; i++) {
		sum *= cos(i) / sin(i);
	}
	cout << "d = " << sum << endl;
	return 0;
}