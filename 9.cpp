#include <iostream>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	int arr[3][4];
	int max, inx[2];
	srand(time(NULL));
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 4; y++) {
			arr[x][y] = rand() % 20;
		}
	}	
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 4; y++) {
			cout << arr[x][y] << '\t';
		}
		cout << endl;
	}
	inx[0] = 1; inx[1] = 1;
	max = arr[0][0];
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 4; y++) {
			if (max < arr[x][y]) { max = arr[x][y]; inx[0] = x+1; inx[1] = y+1; }
		}
		cout << endl;
	}

	cout << "max element = " << max << "; номер строки : " << inx[0] << " ; номер столбца : " << inx[1] << endl;


	return 0;
	


	
}