#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL));
	int A[5][5];
	int B[5][5];
	int C[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			A[i][j] = rand() % 50 - 25;
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (j >= 0) {
				B[i][j] = A[i][j];
			}
			if (j < i) {
				B[i][j] = A[j][i];
				C[i][j] = A[i][j];
			}
			if (j >= i) {
				C[i][j] = -A[i][j];
			}
			cout << A[i][j] << '\t';
		}
		cout << endl;
	}
	cout << endl << endl;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << B[i][j] << '\t';
		}
		cout << endl;
	}
	cout << endl << endl;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << C[i][j] << '\t';
		}
		cout << endl;
	}
}