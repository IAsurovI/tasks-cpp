//Вычислить y = |x-cos(x)|.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(0, "RUS");
    float y, x;
    float& sy = y, & sx = x;
    cout << "Введите x: ";
    cin >> sx;
    sy = fabs(sx-cos(sx));
    cout << "y= " << sy << endl;
}