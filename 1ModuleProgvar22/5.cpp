#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
void main()
{
    setlocale(LC_ALL, "RUS");
    int choise;
    float x, a1, a2, a3;
    cout << "Введите средний балл диплома(3-5):\n";
    cin >> x;
    cout << "Выберите стаж бакалавра:\n";
    cout << "1)Стажа нет.\n";
    cout << "2)Менее 2 лет.\n";
    cout << "3)От 2 до 5 лет.\n";
    cout << "Введите номер:\n";
    cin >> choise;
    switch (choise)
    {
    case 1:
        a1 = 1 * x;
        if (a1 >= 45)
            cout << "Принят в магистратуру\n";
        else cout << "Не принят в магистратуру\n";
        break;
    case 2:
        a2 = 13 * x;
        if (a2 >= 45)
            cout << "Принят в магистратуру\n";
        else cout << "Не принят в магистратуру\n";
        break;
    case 3:
        a3 = 16 * x;
        if (a3 >= 45)
            cout << "Принят в магистратуру\n";
        else cout << "Не принят в магистратуру\n";
        break;
    default:cout << "Введите правильные условия." << endl;
    }
}

