#include <iostream>

using namespace std;

int main() {
	int arr[5] = { 5, -1, 15, -4, 11 };
	for (int i = 0; i < 5; i++) {
		if (arr[i] > 10) {
			cout << arr[i] << '\t' << i << endl;
		}
	}
}