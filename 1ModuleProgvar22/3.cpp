#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int A,B,C,i;
	float dAB,dBC,dCA,p,e,d,S,R,Wa;
	int x1, x2, x3, y1, y2, y3;
	i = 22;
	x1 =0 ;
	x2 =i ;
	x3 = -i;
	y1 =0 ;
	y2 =i-1 ;
	y3 =i+1 ;
	dAB = (sqrt(pow((x2-x1),2)+pow((y2-y1),2)));//dlinaAB
	dBC = (sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2)));//dlinaBC
	dCA = (sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2)));//dlinaCA
	e = dCA / 2;
	d = dCA / 2;
	Wa = ((sqrt(dAB*dBC-e*d)));//bissectrisa
	cout << "Биссектриса= " << Wa << endl;
	p = ((dAB + dBC + dCA) / 2);
	S = sqrt(p*(p-dAB)*(p-dBC)*(p-dCA));
	R = ((pow(dAB,3)) / (4 * S));
	cout << "Радиус описанной окр.= " << R << endl;
}