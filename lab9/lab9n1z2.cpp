//1 Дане одномірний масив w={-6, 12, 3, -2, 16, 5, 6}. Перетворити його елементи відповідно до варіанта. Вивести на екран вихідний і перетворений масиви (у рядок). 
//2 Від’ємні елементи замінити їхніми модулями.
#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	setlocale(0, "RUS");
	int const n = 7;
	int w[n] = { -6,12,3,-2,16,5,6 };
	int i;
	cout << "Входной массив:" << endl;
	for (i = 0; i <= n - 1; i++)
		cout << w[i] << " " << endl;
	cout << "Превращённый массив:" << endl;
	for (i = 0; i <= n - 1; i++) {
		if (w[i] < 0) w[i] = fabs(w[i]);
		cout << w[i] << " " << endl;;
	}

}
