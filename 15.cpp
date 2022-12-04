#include <iostream>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int arr[3][4];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = rand() % 24;
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[2][j] < arr[2][j+1]) {
				int temp = arr[2][j];
				arr[2][j] = arr[2][j + 1];
				arr[2][j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
}