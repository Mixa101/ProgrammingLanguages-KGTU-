#include <iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "");
	double nums[5];
	cout << "Введите числа, количество чисел должно быть 5: ";
	for (int i = 0; i < 5; i++) {
		cin >> nums[i];
	}

	for (int i = 0; i < 5; i++) {
		if (nums[i] >= 1 && nums[i] <= 3) {
			cout << nums[i] << '\t';
		}
	}
}