#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
void main()
{
    setlocale(LC_ALL, "RUS");
    float a1, a2, a3, b1, b2, b3, z1, z2, z3, a, b, c ;
    float one, two, three, all, y1, y2, y3,x,z;
    cout << "Введите x\n";
    cin >> x;
    int choise;    
    cout << "Выберите число из предложенных ниже:\n";
    cout << "1)a\n";
    cout << "2)b\n";
    cout << "3)c\n";
    cout << "Введите номер числа:\n";
    cin >> choise;
    switch (choise)
    {
    case 1: 
        a1 = 0.4; 
        b1 = 2.3;  
        z1 = exp(2*x); 
        one = (a1 * b1 * x) - (pow(cos(z1 * x), 2));
        two = pow((a1 - x), 2) - log(z1 + x);
        three = sqrt((b1 * x) - (a1)+pow((z1 * x), 2));
        if (x < (3.5 * a1))
            cout << one << endl;
        else if ((3.5 * a1) <= x <= b1)
            cout << two << endl;
        else if (x > b1)
            cout << three << endl;
        break;
    case 2:
        a2 = 0.2;
        b2 = 0.8;
        z2 = exp(x);
        one = (a2 * b2 * x) - (pow(cos(z2 * x), 2));
        two = pow((a2 - x), 2) - log(z2 + x);
        three = sqrt((b2 * x) - (a2)+pow((z2 * x), 2));
        if (x < (3.5 * a2))
            cout << one << endl;
        else if ((3.5 * a2) <= x <= b2)
            cout << two << endl;
        else if (x > b2)
            cout << three << endl;
        break;
    case 3:
        a3 = 0.7;
        b3 = 8.1;
        z3 = 0.8;
        one = (a3 * b3 * x) - (pow(cos(z3 * x), 2));
        two = pow((a3 - x), 2) - log(z3 + x);
        three = sqrt((b3 * x) - (a3)+pow((z3 * x), 2));
        if (x < (3.5 * a3))
            cout << one << endl;
        else if ((3.5 * a3) <= x <= b3)
            cout << two << endl;
        else if (x > b3)
            cout << three << endl;
        break;
    default:cout<<"Вы ввели не тот номер"<< endl;
    }
}