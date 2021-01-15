#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	float x, a, b, c, d, e, f, g, h;
	cout << "Введите х:" << endl;
	cin >> x;
	a = (sin(x) * (pow(cos(x), 2.0)) * (sin(x + 1.4)));//числитель
	b = (0.85 + 7.14);
	c = a / b;
		cout << "Результат: " << c<<endl;
}
