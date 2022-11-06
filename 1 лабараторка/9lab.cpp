#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	int arr[3][4] = {
		{1, 2, 3, 4},
		{5, 67, 7 ,8},
		{9, 10, 10, 11}
	};
	int max = arr[0][0], s, t;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			if (max < arr[i][j]) {
				max = arr[i][j];
				s = i + 1;
				t = j + 1;
			}
		}
	}

	cout << max << " номер строки " << s << "; номер столбца " << t;
}