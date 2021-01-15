//Даны три числа. Вывести на экран среднее по
//начению из них.
//1 a=3; b=3.5; c=-2.1
//2 a=2,1; b=-6.55; c=0.1
//3 a=-9; b=-3.7; c=-0.1
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
void main()
{
    setlocale(LC_ALL, "RUS");
    float a1, a2, a3, b1, b2, b3, c1, c2, c3, a, b, c;
    a1 = 3;
    a2 = 2.1;
    a3 = -9;
    b1 = 3.5;
    b2 = -6.55;
    b3 = -3.7;
    c1 = -2.1;
    c2 = 0.1;
    c3 = -0.1;
    a = ((a1 + a2 + a3) / 3);
    b = ((b1 + b2 + b3) / 3);
    c= ((c1 + c2 + c3) / 3);
    if (a < b < c||c<b<a)
        cout << "Среднее число b: " << b << endl;
    else if(b<a<c||c<a<b)
        cout << "Среднее число a: " << a << endl;
    else 
        cout << "Среднее число c: " << c << endl;
}




//Даны три числа. Вывести на экран среднее по
//начению из них.
//1 a=3; b=3.5; c=-2.1
//2 a=2,1; b=-6.55; c=0.1
//3 a=-9; b=-3.7; c=-0.1
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
void main()
{
    setlocale(LC_ALL, "RUS");
    float a1, a2, a3, b1, b2, b3, c1, c2, c3, a, b, c ;
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
        a1 = 3; 
        b1 = 3.5;  
        c1 = -2.1; 
        a = ((a1 + b1 + c1) / 3);
        cout<<"Среднее числа а: "<<a<<endl;
        break;
    case 2:
        a2 = 2.1;
        b2 = -6.55;
        c2 = 0.1;
        b = ((a2 + b2 + a2) / 3);
        cout << "Среднее числа b: " << b << endl;
        break;
    case 3:
        a3 = -9;
        b3 = -3.7;
        c3 = -0.1;
        c = ((a3 + b3 + c3) / 3);
        cout << "Среднее числа c: " << c << endl;
        break;
    default:cout<<"Вы ввели не тот номер"<< endl;
    }
}
