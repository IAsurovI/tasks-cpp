#include <iostream>
#include <conio.h>
#include <math.h>
#include <cmath>
using namespace std;
int main()
{
	float x, a, b,a1,a2,y;
	a = 2.56;
	x = 6.37;
	b = 7.18;
	a1 = exp(fabs(x - a));
	a2 = pow(cos(b*x), 2);
	y = a1 / a2;
	cout << y << endl;
}
