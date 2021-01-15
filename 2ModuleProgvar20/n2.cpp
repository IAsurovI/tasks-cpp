#include <iostream>
#include <cmath>
using namespace std;
void main()
{
	setlocale(0, "RUS");
	double S = 1, x = 0.0, e = 0.0, y = 0.0,dy=0.0;
	cout << "Введите x:";
	cin >> x;
	float a = 0;
	cout << "Введите точность E:";
	cin >> e;
	for (int i = 2, st = 2, zn=2,nozn=2; i > 0; nozn +=2,i++, st += 1,zn+=nozn*2)
	{
		a = (pow(x,st)/zn);
		y = (1 + (pow(x, st) / zn)) - a;
		dy = y + y;
		if (y < e)break;
		S += dy;
	}
	cout << "S= " << S << endl;
}
