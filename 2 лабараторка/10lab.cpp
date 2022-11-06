#include <iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "");
	string a;
	cout << "Введите число 4х значное = ";
	cin >> a;
	if (a[0] == a[3] && a[2] == a[1]) {
		cout << "число " << a << " является палиндромом";
	}
	else {
		cout << "Число не является палиндромом";
	}

}