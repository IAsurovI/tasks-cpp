#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>
using namespace std;
void main()
{
	setlocale(0, "RUS");
	double x;
	double y;
	for (x =-1; x < 1.5; x += 0.2)
	{
		if (x > 1)
		{
			y = sqrt(tan(pow(x, 2) - 1));
		}
		else if (0 <= x <= 1)
			y = -2*x;
		else
			y = exp(cos(x));
		cout << "x= " << x << setw(20) << "y= " << y << endl;
	}
	//cout << "x= " << x << setw(20) << "y= " << y << endl;
}
