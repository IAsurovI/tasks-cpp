#include <iostream>
#include <cmath>
using namespace std;
void main()
{
	setlocale(0, "RUS");
	double a(0);
	double i, x, z;
	int j, r, t;
	unsigned long int n;
	cout << "Введите n:";
	cin >> n;
	cout << "Введите x:";
	cin >> x;
	for (z = 2.0; z <= n; z++)
	{
		a += (cos(z * x) / z);
		//cout << "z= " << z << endl;
		//cout << "a= " << a << " n= " << n << " z= " << z<<" x= "<<x<< endl;
	}
	cout << "Сумма " << n << " членов ряда = " << (cos(x) + a) << endl;
	//cout << "a= " << a << " n= " << n << " i= " << i << endl;
}
