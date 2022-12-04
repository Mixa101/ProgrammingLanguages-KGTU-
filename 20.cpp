#include <iostream>
#include <ctime>

using namespace std;

int main() {
	int arr[3][3];
	srand(time(NULL));
	int count = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] = rand() % 18;
			int c = 0;
			for (int x = 2; x < arr[i][j]; x++) {
					if (arr[i][j] % x == 0) {
						c += 1;
						break;
					}
			}
			if (c == 0 && arr[i][j] != 0 && arr[i][j] != 1) {
				count++;
			}
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}

	cout << count;
}