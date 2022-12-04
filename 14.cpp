#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL));
	int n;
	cout << "n = "; cin >> n;
	int** arr = new int*[n];
	for (int i = 0; i < n; i++) { arr[i] = new int[n]; }

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = rand() % 3;
			if (i == j) {
				arr[i][j] = 0;
			}
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
}