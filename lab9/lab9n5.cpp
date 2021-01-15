#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
void main()
{
	setlocale(0, "RUS");
	int const n = 14;
	int w[n];
	int i;
	int t[n];
	int a = 0;
	cout << "Введите элементы массива:\n";
	cin >> w[0];
	for (i = 1; i <= n - 1; i++)
	{
		cin >> w[i];
	}
	for (i = 0; i <= n - 1; i++)
	{
		if (w[i + 1] >= w[i])
		{
			a++;
		}
	}
	if (a == 13)
			{
				cout << "УПОРЯДКОВАНО" << endl;
			}
			else cout << "НЕ УПОРЯДКОВАНО" << endl;
}