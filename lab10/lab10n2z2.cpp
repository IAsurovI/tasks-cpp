//Ввести массив, состоящий из 12 элементов целого типа. Получить новый
//массив, заменив значение пятого элемента среднеарифметическим
//исходного массива.
#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>
using namespace std;
void main()
{
	setlocale(0, "RUS");
	const int n = 8;
	int w[n];
	int r[n];
	int i = 0;        
	int a = 0;
	int arfdel = 0;
	double sum = 0;
	double  spk = 1.0;
	srand(time(0));
	for (i = 0; i < n; i++)
	{
		w[i] = 10 + rand() % 99;
	}
	cout << "Исходный массив: " << "|" << " Превращённый массив:" << endl;
	for (i = 0; i < n - 1; i++)
	{
		r[i] = w[i] % 10;
		cout << "w[" << i << "]=" << w[i] << setw(11) << "|" << " r[" << i << "]=" << r[i] << endl;
	}
}
