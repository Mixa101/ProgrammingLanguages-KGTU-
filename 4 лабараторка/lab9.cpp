#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(time(0));
	int arr[3][4];
	int max, st, sr;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = rand() % 20 + 1;
		}
	}	
	max = arr[0][0];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
				sr = i;
				st = j;
			}
		}
	}
	cout << max << '\t' << sr << '\t' << st;
}