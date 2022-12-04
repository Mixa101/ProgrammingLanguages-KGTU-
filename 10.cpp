#include <iostream>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	int arr[3][6];
	double p, count = 0;
	double avg[6];
	srand(time(NULL));
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			arr[i][j] = rand() % 20 - 10;
		}
	}
	for (int i = 0; i < 6; i++) {
		p = 0;
		count = 0;
		for (int j = 0; j < 3; j++) {
			if (arr[j][i] > 0) { p += arr[j][i]; count++; }
			else {
				if (j == 2 && count == 0) {
					arr[j][i] = rand() % 10;
					p += arr[j][i]; count++;
				}
				else
					continue;
			}
		}
		avg[i] = p / count + 0.0;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}

	for (int i = 0; i < 6; i++) {
		cout << "average from column № " << i + 1 << "===" << avg[i] << '\t';
	}
}