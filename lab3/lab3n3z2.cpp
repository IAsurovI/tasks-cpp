#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
	float a, c, d, e, f, g, h, i,q; // moi peremenniye
	float b, y, x; // Peremenniye, vvodit user
	cout << "Vvedite b\n";
	cin >> b;
	cout << "Vvedite y\n";
	cin >> y;
	cout << "Vvedite x\n";
	cin >> x;
	a = (sin(b*x) * tan(y / 2));//pervoye virazheniye+
	h = (b * ((pow(tan(x), 3)) - (pow(2*b, 2)) * tan(x) + 1));//chislitel 2 virazheniya+
	i = (sin(x + y) + cos(x - y));//znamenatel 2 virazheniya+
	d = (pow(h/i,1.0/3)) ;// vtoroye virazheniye+
	c = (log(2) * (pow(cos(b*x), 3))); // tretye virazheniye+
	e = (sqrt(pow(sin(y), 2) + 1));// chislitel last virazheniya+
	f = (2 - cos(b * x));//znamenatel last virazheniya+
	g = (e / f); // last virazheniye
	q = (a - d + c - g);
	cout << "Beta =" << q << endl;
}