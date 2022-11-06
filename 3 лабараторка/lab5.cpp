#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int x = 1;
	int s = 0, p = 1;
	do {
		s += x;
		p *= x;
		x++;
	} while (x <= 10);

	cout << s << endl << p;
}