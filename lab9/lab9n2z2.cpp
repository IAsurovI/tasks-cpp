//Скласти програму для рішення задачі: Заданий масив x. Розрахувати значення елементів масиву y відповідно до заданого варіанта (див. таблицю 10.2).
//Вивести на екран масиви x і y(у стовпець).Знайти максимальний і мінімальний елементи масиву y.

#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
void main()
{
	setlocale(0, "RUS");
	int const n = 8;
	float w[n] = { 0.5, 0.77, 2, 3.1, 6.4, 9.82, 10, 12.4 };
	double y[n];
	int i = 0;
	
	double max, min;
	cout << "Mассив x:" << endl;

	for (i = 0; i <= n - 1; i++)
	{
		cout << w[i] << " " << endl;
	}
	cout << " " << endl;
	cout << "Mассив y:" << endl;
	for (i = 0; i <= n - 1; i++)
	{
		y[i] = ((cos(3 * i) + 5.87) / (pow(9.8 + pow(i, 3), 1 / 4)));
		cout << y[i] << " " << endl;
	}
	max = y[0];
	min = y[0];
	for (i = 0; i <= n - 1; i++) {
		if (y[i] > max) {
			max = y[i];

		}
		if (y[i] < min) {
			min = y[i];
		}
	}
	cout << "MAX:  " << max << endl;
	cout << "MIN:  " << min << endl;

}