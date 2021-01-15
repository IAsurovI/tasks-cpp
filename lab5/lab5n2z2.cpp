// Определить, является ли треугольник со сторонами а, в, с равнобедренным.
//

#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int a, b, c;
	cout << "Введите a,b,c, где а и b - боковые стороны, с - основание" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a == b)
		cout << "Треугольник равнобедренный" << endl;
	else 
		cout << "Треугольник не равнобедренный" << endl;
}