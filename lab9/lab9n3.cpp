#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
void main()
{
	setlocale(0, "RUS");
	int const n = 13;
	float w[n] = { 5, -6, 24, -9.8,15.3, 45, -6.23, 7, 2, -7, 54.1, 12.2, -23 };
	int i;
	float d = 0.0;
	int arfdel = 0;//delitel v arefmit
	double sum = 0;
	double  spk = 1.0;
	double stepen;
	for (int i = 0; i < n; i++)
	{
		if (w[i] > 0)
		{
			arfdel++;
			sum += w[i];
			cout << w[i] << endl;//отладочный
		}
	}
	cout << "Среднее арифметическое положительных элементов: " << sum / arfdel << endl;
	for (int i = 0; i < n - 1; i++)
	{
		if (w[i] > 0)
		{
			arfdel++;
			spk *= w[i];//Подкоренное выражение
			cout << w[i] << endl;//отладочный
		}
	}
	cout << "Среднее геометрическое положительных элементов: " << pow(spk, (1.0 / arfdel)) << endl;
}