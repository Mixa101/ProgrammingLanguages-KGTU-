#include <iostream>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int x[8];
	int arr[8][8];
	int a;
	cout << "Input x1, x2, x3...x8 = ";
	for (int i = 0; i < 8; i++) {
		cin >> x[i];
	}
	for (int i = 0; i < 8; i++) {
		a = i+1;
		for (int j = 0; j < 8; j++) {
			arr[i][j] = pow(x[j], a);
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
}