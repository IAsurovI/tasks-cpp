//Дан массив символов, содержащий число в двоичной системе счисления. Проверить правильность ввода этого числа (в его записи должны быть только символы 0 и 1).Если число введено неверно, повторить
//ввод. При правильном вводе перевести число в десятичную систему счисления.
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{
	setlocale(0, "RUS");
	const int MAX = 1000;
	char str[MAX] = "";
	int des = 0;
	int i = 0;
	int o = 0;
	cout << "Введите число в двоичном коде: " << endl;
	tryAgain:
	cin.getline(str, MAX, '\n');
	cout << "OTLADKA: vvedeno " << strlen(str) << " simvolov" << endl;
	o = strlen(str);
	while (str[i] == '0' || str[i] == '1')
	{
		i++;
	}
	if (i == strlen(str))
	{
		cout << "Введено число в двоичной системе счисления." <</*" i= "<<i<<*/endl;
		for (int i = 0; i < strlen(str); i++)
		{
			des *= 2;
			des += str[i] - '0';
		}
		cout << "Введённое число в десятичной системе: " << des << endl;
	}
	else
	{
		cout << "Вы ввели неверное число. Повторите попытку: ";
		goto tryAgain;
	}
}
