
#include <iostream>
#include <iomanip>
#include <math.h>
#include <conio.h>
using namespace std;
void main()
{
	double a, b,x,y;
	a = 2.8;
	b = 4.23;
	for (x = 1.5; x <= 18; x += 2)
	{
		y = ((exp(fabs(x - a)) + 1) / (pow(cos(b * x), 2)));
		cout << "x= " << setw(2) << x << setw(10) << "y= " << y<<endl;
	}
}
