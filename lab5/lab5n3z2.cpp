// Дано двухзначное число. Определить: а) входит ли в него цифра 5;
//б) входит ли в него цифра а.
//

#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int a, b, c;
	int a1, a2, b1,b2;
	cout << "Введите двузначное число:" << endl;
	cin >> b;
	c = 5;
	a1 = b % 10;//desyatok
	a2 = b % 1;//editica
	if (a1 == c|| a2==c)
		cout << "В число "<<b<<" входит цифра 5" << endl;
	else if(a1!=c||a2!=c)
		cout << "В число " << b << " не входит цифра 5" << endl;
	cout << "Введите число а" << endl;
	cin >> a;
	if (a1 == a || a2 == a)
		cout << "В число " << b << " входит цифра "<<a << endl;
	else if(a1!=a||a2!=a)
		cout << "В число " << b << " не входит цифра "<<a << endl;
	return 0;
}