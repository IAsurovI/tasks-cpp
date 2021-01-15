#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUS");
	double a, b, c; 
	cout << "Введите стаж:\n";//Ввели
	cin >> a;                     //Стаж
	cout << "Введите зарплату:\n";
	cin >> b;
	if (a > 2, a < 5)
		cout << "Стаж от 2 до 5 лет, зарплата с надбавкой:" << b * 1.02 << endl;
	else if(a>5, a<10)
	cout << "Стаж от 5 до 10 лет, зарплата с надбавкой:" << b * 1.05<< endl;
}
