#include <iostream>

using namespace std;

int main() {
	int N, count = 0;
	cout << "N = "; cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cout << i << " = "; cin >> arr[i]; cout << endl;
	}
	for (int i = 0; i < N; i+= 2) {
		if (arr[i] % 2 == 0) {
			continue;
		}
		else {
			count++;
		}
	}
	cout << count << endl;
}