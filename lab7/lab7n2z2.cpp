#include <iostream>
#include <iomanip>
#include <math.h>
#include <conio.h>
using namespace std;
void main()
{
	double a, b,x,y;
	a = 0.48;
	b = 2.63;
	for (x = 0.12; x <= 4.35; x += 0.4)
	{
		if (tan(x) > a)
		{
			y = ((pow(tan(a * x), 2)) / (b + pow(x, 3)));
			cout << "x= " << setw(2) << x << setw(10) << "y= " << y << endl;
		}
		else if (tan(x) <= a)
		{
			y = ((sqrt(pow(a, 2)) + (exp(b * x))));
			cout << "x= " << setw(2) << x << setw(10) << "y= " << y << endl;
		}
	}
}