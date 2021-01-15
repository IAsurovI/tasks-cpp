#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
void main()
{
    setlocale(LC_ALL, "RUS");
    double x, y,x1,x2;
    cout << "Введите x\n";
    cin >> x;
    cout << "Введите y\n";
    cin >> y;
    x1 = (x * x + y * y <= 1);  //круг
    x2 = (abs(x) <= 1 && abs(y) <= 1);// квадрат
    if (x2 && !x1)
        cout << "Точка входит в заштрихованную область\n";
    else
        cout << "Точка не входит в заштрихованную область\n";
}
