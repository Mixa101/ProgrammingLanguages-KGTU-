#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    int a, b, c, d;
    cout << "Сколько вам лет? ";
    cin >> a;
    b = a % 10;
    c = a % 10;
    if (a == 11) cout << "Вам" << a << "лет";
    else if (a >= 100) cout << "Ошибка вам не может быть больше 100 лет!" << endl;
    else if (b == 1) { cout << "Вам " << a << " год"; }
    else if (a == 12 || a == 13 || a == 14) cout << "Вам " << a << "лет";
    else if (c == 2 || c == 3 || c == 4)
    {
        cout << "Вам " << a << " года" << endl;
    }
    
    else
    {
        cout << "Вам" << a << "лет";
    }
     
    return 0;
}