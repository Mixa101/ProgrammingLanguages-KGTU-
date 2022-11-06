#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int a, b;
    double S, c;
    //пусть a = 1 катет треугольника а b = 2 катет треугольника
    //тогда c = гипотенуза и s = площадь
    cout << "Введите чему будет равно 1 катет треугольника: ";
    cin >> a;
    cout << endl << "2 катет треугольника: ";
    cin >> b;
    cout << endl;
    cout << a << '\t' << b;
    
    c = sqrt(pow(a, 2) + pow(b, 2));
    S = 1./2*(a*b);
    
    cout << endl << "гипотенуза треугольника равна = " << c << endl << "площадь треугольника равна = " << S;

    return 0;
}
