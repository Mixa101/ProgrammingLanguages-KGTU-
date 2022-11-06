#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "a = ";
    cin >> a;
    b = a / 1000;
    cout << b << endl;
    b = a / 100 % 10;
    cout << b << endl;
    b = a % 100 / 10;
    cout << b << endl;
    b = a % 10;
    cout << b << endl;
    return 0;
}