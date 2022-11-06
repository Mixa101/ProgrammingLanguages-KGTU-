#include <iostream>

using namespace std;

int main() {
	int arr[10] = { -10, 3, 5, -1, -5, 6, 7, 8, -9, 0 };
	for (int i = 0; i < 10; i++) {
		if (arr[i] > 0) {
			cout << arr[i] << '\t';
		}
	}
}