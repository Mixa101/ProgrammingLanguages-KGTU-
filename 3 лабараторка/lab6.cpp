#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int x = 1;
	double sum = 0;
	while (x <= 100) {
		sum += 1 / pow(x, 2);
		x++;
	}
	cout << sum << endl;
	return 0;
}