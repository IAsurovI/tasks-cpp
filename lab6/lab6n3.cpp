// Написать программу, которая в зависимости от характера ветра выдает
//сообщение о его скорости от 1до 4 м / с - слабый(1); от 5 - 10 м / c -
//умеренный(2); от 9 - 18 м / c - сильный(3); больше 19 м / c - ураганный(4).
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
void main()
{
    setlocale(LC_ALL, "RUS");
    int choise;
    cout << "Выберите скорость ветра:\n";
    cout << "1)1-4м/c\n";
    cout << "2)5-10м/c\n";
    cout << "3)9-18м/с\n";
    cout << "4)больше 19м/с\n";
    cout << "Введите номер числа:\n";
    cin >> choise;
    switch (choise)
    {
    case 1:
        cout << "Ветер слабый\n";
        break;
    case 2:
        cout << "Ветер умеренный\n";
        break;
    case 3:
        cout << "Ветер сильный\n";
        break;
    case 4:
        cout << "Ветер ураганный\n";
        break;
    default:cout << "Ветра нет" << endl;
    }
}

