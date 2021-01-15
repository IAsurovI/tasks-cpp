#include <iostream>
#include <iomanip>
#include <math.h>
#include <conio.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUS");
	double i;
	int choise;
	cout << "Выберите функцию:" << endl;
	cout << "1)sin\n";
	cout << "2)cos\n";
	cout << "3)tg\n";
	cout << "4)ctg\n";
	cin >> choise;
	switch (choise)
	{
	case 1:
		for (int i = 0; i <= 180; i += 10)
			cout << "x= " << setw(2) << i << setw(10) << "y= " << sin(i * 3.1415 / 180) << endl;
		break;
	case 2:
		for (int i = 0; i <= 180; i += 10)
			cout << "x= " << setw(2) << i << setw(10) << "y= " << cos(i * 3.1415 / 180) << endl;
		break;
	case 3:
		for (int i = 0; i <= 180; i += 10)
			cout << "x= " << setw(2) << i << setw(10) << "y= " << tan(i * 3.1415 / 180) << endl;
		break;
	case 4:
		for (int i = 0; i <= 180; i += 10)
			cout << "x= " << setw(2) << i << setw(10) << "y= " <<((cos(i * 3.1415 / 180))/(sin(i * 3.1415 / 180))) << endl;
		break;
	}
}