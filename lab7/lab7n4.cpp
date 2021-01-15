
#include <iostream>
#include <iomanip>
#include <math.h>
#include <conio.h>
using namespace std;
void main()
{	
	setlocale(LC_ALL, "RUS");
	int a, b;
	int c, d, e;
	int count = 0;
	while (count < 10)
	{
		cout << "Введите число:\n";
		cin >> a;
		if (a != 0)
		{
		cout << "Введите число:\n";
		cin >> b;
		
		
			c = a + b;
			d = a * b;
			cout << "d= " << d << " c= " << c << endl;
			if (d == 0)
			{
				cout << "Сумма чисел равна " << c << endl;
				cout << "Произведение чисел равно " << d << endl;

				break;
			}
			else if (d != 0)
				cout << "Сумма чисел равна " << c << endl;
			cout << "Произведение чисел равно " << d << endl;
		}
		else if (a == 0) {
			cout << "0 введён первым" << endl; break;
		}
		
	}
	cout << "Работа программы окончена\n";
}