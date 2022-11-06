#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	int arr[] = { 9, 8, 7, 6, 5, 4, 4, 2, 1 };
	int count = 0;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[1]); i++) {
		if (arr[i] > arr[i + 1]) {
			count++;
		}
		else {
			cout << "данная последовательность не убывающая";
			count = 0;
			break;
		}
	}
	if (count == sizeof(arr) / sizeof(arr[1])) {
		cout << "Данная последовательность является убывающей";
	}
}