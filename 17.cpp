#include <iostream>

using namespace std;
int main() {
	int a[3];
	int arr[3][3];
	cout << "a0, a1, a2 = ";
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] = a[i] - (3 * a[j]);
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
}