#include <iostream>
#include <cmath>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "");
	int a;
	cout << "Введите ребро куба: ";
	cin >> a;

	int s = pow(a, 2);
	cout << "Площадь грани куба: " << s << endl;

	int S = 6 * s;
	cout << "Площадь полной поверхности: " << S << endl;

	int V = pow(a, 3);
	cout << "Обьём куба: " << V << endl;


	return 0;
}