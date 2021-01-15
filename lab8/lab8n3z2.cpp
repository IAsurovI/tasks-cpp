#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>
using namespace std;
void main()
{
	double s, x, factorial = 1;
	unsigned int n;
	unsigned int k;
	int z, res;
	for (x = -2, n = 3; x < 3; x += 0.5)
	{
		for (s = 0, k = 1; k < 5; k++)
		{
			for (z = 1; z <= k; z++)
			{
				factorial *= (z + 1.0);
			}
			s += (((pow(-2.0, k + 1.0)) * factorial) / (pow((x + 2.5), (k + 1.0))));
			//cout << "S= " << s << " x= " << x << " k= " << k << endl; //для проверки
			
		}
		cout << "x= " << x << setw(20) << " f(x)= " << s << endl;
	}
}
