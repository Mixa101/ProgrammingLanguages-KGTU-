#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	double y;
	for (int x = 0; x <= 16; x += 2)
	{
		y = (0.8 * x) - (sin(sqrt(x))) - 0.1;
		cout << y << endl;
	}
	return 0;
}