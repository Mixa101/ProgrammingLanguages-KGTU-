#include <iostream>
#include <ctime>

using namespace std;

void qsort(int arr[], int a, int b) {
	int first = a, last = b;
	int p;
	int middle = arr[(a+b)/2];
	do{
		while (arr[first] < middle)first++;
		while (arr[last] > middle)last--;
		if (first <= last) {
			p = arr[first];
			arr[first] = arr[last];
			arr[last] = p;
			first++;
			last--;
		}
	} while (first < last);
	if (a < last) { qsort(arr, a, last); }
	if (first < b){ qsort(arr, first, b);}
};

int main() {
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 20;
	}

	for (int i = 0; i < 10; i++)cout << arr[i] << '\t';
	cout << "До сортировки:" << endl;

	qsort(arr, 0, 9);

	for (int i = 0; i < 10; i++)cout << arr[i] << '\t';
	cout << "после сортировки";

	return 0;
}

