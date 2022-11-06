#include <iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "");
	double nums[3];
	cout << "Введите 3 числа = ";
	for (int i = 0; i < 3; i++) {
		cin >> nums[i];
	}
	if (nums[0] >= nums[1] >= nums[2]) {
		for (int i = 0; i < 3; i++) { nums[i] = nums[i] * 2; }
	}
	else {
		for (int i = 0; i < 3; i++) { nums[i] = abs(nums[i]); }
	}
	for (int i = 0; i < 3; i++) { cout << nums[i] << '\t'; }
}