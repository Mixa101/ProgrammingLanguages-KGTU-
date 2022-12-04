#include <iostream>
#include <ctime>

using namespace std;

int main() {
	int arr[5][5];
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			arr[i][j] = rand() % 50;
			if (i <= j) {
				arr[i][j] = 0;
			}
			cout << arr[i][j] << '\t';

		}
		cout << endl;
	}
}