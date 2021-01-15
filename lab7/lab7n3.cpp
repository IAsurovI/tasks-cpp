#include <iostream>
#include <cmath>
using namespace std;
void main()
{
	double a(0);
	double i;
	unsigned long int n = 1;
	for (i = sqrt(6 * (1 + a)); i <= 3.14159; i += 0.0001)
	{
		a = (1 / pow(n, 2));
		n++;
		//cout << "a= " << a << " n= " << n << " i= " << i<< endl;
	}
	cout << "pi=" << i << endl;
	//cout << "a= " << a << " n= " << n << " i= " << i << endl;
}
