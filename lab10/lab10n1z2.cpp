//Ввести массив, состоящий из 12 элементов целого типа. Получить новый
//массив, заменив значение пятого элемента среднеарифметическим
//исходного массива.
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
void main()
{
	setlocale(0, "RUS");
	const int n = 12;
	int w[n];
	int i = 0;
	int a = 0;
	int arfdel = 0;
	double sum = 0;
	double  spk = 1.0;
	int y;
	srand(time(0));
	for (i = 0; i < n; i++)
	{
		w[i] = 1 + rand() % 12;
		cout << "w[" << i << "]=" << w[i] << endl;
		arfdel++;
		sum += w[i];
	}
	cout << "" << endl;
	for (i = 0; i < n - 1; i++)
	{
		w[4] = sum / arfdel;
		cout << "w[" << i << "]=" << w[i] << "" << endl;
		y = sum / arfdel;
		
	}cout << "Sr arf= " << y << endl;
}
