#include <iostream>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	srand(time(NULL));

	int arr[5][2];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 2; j++) {
			arr[i][j] = rand() % 20;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			if (arr[j][1] > arr[j+1][1]) {
				int temp = arr[j][1];
				arr[j][1] = arr[j + 1][1];
				arr[j + 1][1] = temp;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 2; j++) {
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
}