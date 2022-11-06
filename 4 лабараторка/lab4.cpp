#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	int av = 0, count = 0;
	int arr[7] = { 18, 12, 11, 15, 19, 23, 22 };
	for (int i = 0; i < 7; i++) {
		av += arr[i];
		if (arr[i] < 0) {
			count += 1;
		}
	}
	cout << "Средняя температура = " << av / 7 << '\t' << "температура нмже нуля была " << count << " раз" << endl;
}