#include <iostream>
#include <ctime>

using namespace std;

int main() {
	int arr[10];
	srand(time(NULL));
	bool alreadyThere;
	int newValue;
	for (int i = 0; i < 10;) {
		alreadyThere = false;
		newValue = rand() % 20;
		for (int j = 0; j < i; j++) {
			if (arr[j] == newValue) {
				alreadyThere = true;
				break;
			}
		}
		if (!alreadyThere) {
			arr[i] = newValue;
			i++;
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << '\t';
	}
}