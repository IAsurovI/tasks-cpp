
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
	const float pi = 3.14f;
	float R, S;
	cout << "Pадиус шара=";
	cin >> R;
	S = 4 * pi * (R * R);
	cout << "Площадь поверхности шара=\n"
		<< S << endl;
}





#include <iostream>
#include <math.h>
#include <conio.h>
#include <locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
	const float pi = 3.14f;
	float R, S;
	cout << "Pадиус шара=";
	cin >> R ;
	S = 4 * pi * (R * R);
	cout << "Площадь поверхности шара=\n"
		<< S << endl;
}	