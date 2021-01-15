#include <iostream>
using namespace std;

int main()
{
	system("cls");
	setlocale(LC_ALL, "RUS");
	int vp, S, N;
	int a, b, c;
	int p;
	S = 20000;
	N = 5;
	p = 12;
	a = p / 100;
	b = 1 + a;
	c = S * b;
	vp = c / N;
	cout << "Размер выплат " << vp;
}






#include <iostream>
#include <math.h>
#include <conio.h>
#include <locale.h>
using namespace std;

 int main()
 {
	system("cls");
	setlocale(LC_ALL, "RUS");
	int vp, p, N;
	int s;
	s = 20000;
	N = 5;
	p = 12;
	vp = (s)*(1 + (p / 100)) / N;
	cout << "Размер выплат\n"
		<<  vp << endl;
}




#include <iostream>
#include <math.h>
#include <conio.h>
#include <locale.h>
using namespace std;

int main()
{
	system("cls");
	setlocale(LC_ALL, "RUS");
	int vp, S, N;
	int a, b, c;
	float p;
	S = 20000;
	N = 5;
	p = 12;
	a = p / 100;
	b = 1 + a;
	c = S * b;
	vp = c / N;
	cout << "Размер выплат "<< vp;
}