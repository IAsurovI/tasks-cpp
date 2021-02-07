#include <iostream>
#include <cmath>
using namespace std;
void main()
{
    setlocale(0, "RUS");
    long int a=0, b=0, c=0, D;
    double x1, x2, y1, y2, y3, y4, x;
    cout << "Введите а: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    cout << "Введите с: ";
    cin >> c;
    D = (pow(b, 2) - (4 * (a * c)));
    if (D > 0)
    {
        x1 = (((-b) + (sqrt(D)) / 2 * a));
        x2 = (((-b) - (sqrt(D)) / 2 * a));
        if (x1 == 0 && x2 == 0)
        {
            cout << "Корней нет." << endl;
        }
        else if (x1 < 0 && x2 < 0)
        {
            cout << "Нет решений." << endl;
        }
        else if (x1 < 0 && x2>0)
        {
            y1 = (sqrt(x2));
            y2 = (sqrt(x2));
            cout << "y1= " << y1 << " y2= " << y2 << endl;
        }
        else if (x1 > 0 && x2 < 0)
        {
            y1 = (sqrt(x1));
            y2 = (sqrt(x1));
            cout << "y1= " << y1 << " y2= " << y2 << endl;
        }
        else if (x1 > 0 && x2 > 0)
        {
            y1 = (sqrt(x1));
            y2 = (sqrt(x1));
            y3 = (sqrt(x2));
            y4 = (sqrt(x2));
            cout << "y1= " << y1 << " y2= " << y2 << " y3= " << y3 << " y4= " << y4 << endl;
        }
    }
    else if (D == 0)
    {
        x = ((-b) / (2 * a));
    }
    else if (D < 0)
    {
        cout << "Дискриминант меньше 0, решений нет. " << endl;
    }
}
