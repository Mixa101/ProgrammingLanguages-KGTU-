#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL));
	int arr[4][4];
	int max, index;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = rand() % 32;
			cout << arr[i][j]<<'\t';
			if (i == j) {
				if (i == 0) {
					max = arr[i][j];
					index = 0;
				}
				if (max < arr[i][j]) {
					max = arr[i][j];
					index = i;
				}
			}
		}
		cout << endl;
	}

	cout << endl << "Max element = " << max << endl;
	for (int i = 0; i < 4; i++) {
		cout << arr[index][i] << '\t';
	}
}