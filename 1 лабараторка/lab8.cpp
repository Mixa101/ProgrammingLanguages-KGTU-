#include <iostream>
#include <cmath>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "");
	int x1, x2, y1, y2;
	cout << "Введите x1: ";
	cin >> x1;
	cout << endl;
	cout << "Введите y1: ";
	cin >> y1;
	cout << endl;
	cout << "Введите x2: ";
	cin >> x2;
	cout << endl;
	cout << "Введите y2: ";
	cin >> y2;
	cout << endl;

	int dist = sqrt(pow((pow(x2, 2) - pow(x1, 2)) + (pow(y2, 2) - pow(y1, 2)), 2));
	cout << dist;

	return 0;
}