#include <iostream>
#include <cmath>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "");
	int a, b;

	cout << "Enter a first number: ";
	cin >> a;
	cout << endl << "Enter a second number: ";
	cin >> b;

	double ArM = (a + b) / 2.0;
	double GeM = sqrt((abs(a) * abs(b)));

	cout << endl << "The ArM is " << ArM << endl << "The GeM is " << GeM << endl;

	return 0;
}