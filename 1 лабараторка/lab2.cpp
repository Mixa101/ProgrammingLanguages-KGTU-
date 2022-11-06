
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    const double PI = 3.14;
    int r;
    
    cout << "Введите радиус окружности: ";
    cin >> r;
    
    cout << "\n Диаметр круга равен: " << 2*r << endl;
    
    cout << "Длина окружности равна: " << 2*PI*r << endl;
    
    cout << "Площадь окружности равна: " << PI*pow(r, 2);
    
    

    return 0;
}
