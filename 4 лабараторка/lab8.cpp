#include <iostream>
using namespace std;

int main() {
	int arr[] = { 3, 5, 1, 7, 78, 0 , 30 , 100};
	int max = arr[0], t;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[1]); i++) {
		if (max < arr[i]) {
			max = arr[i];
			t = i;
		}
	}
	arr[t] = arr[0];
	arr[0] = max;

	for (int i : arr) {
		cout << i << '\t';
	}
}