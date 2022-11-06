#include <iostream>

using namespace std;

int main() {
	int arr[] = { 1, 2, 2, 4, 5, 6, 9, 9, 10 };
	int count = 0;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[1]); i++) {
		if (arr[i] == arr[i + 1]) {
			count++;
		}
		else {
			continue;
		}
	}
	cout << count;
}