#include <iostream>

using namespace std;

int main() {
	int arr[5] = { 5, -1, 3, -4, 10 };
	for (int i = 0; i < 5; i++) {
		if (arr[i] < 0) {
			cout << arr[i] << '\t' << i;
			break;
		}
	}
}