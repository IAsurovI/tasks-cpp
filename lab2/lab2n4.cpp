//Даны цифры двух двузначных чисел, записываемых в виде а2а1 и b2 b1,
//где а1 и b1— число единиц, а2 и b2 — число десятков Получить цифры числа,
//равного сумме заданных чисел (известно, что это число двузначное).
//Слагаемое — двузначное число и число-результат не определять: условный
//оператор не использовать.
#include <iostream>
using namespace std;

int main()
{
	int a1,a2,b1,b2,a,b,c,d,e;
	cout << "Vvedite a1(edinica 1 chisla)\n"; // Edinica
	cin >> a1;
	cout << "Vvedite a2(desyatok 1 chisla)\n"; // Desyatok
	cin >> a2;
	cout << "Vvedite b1(edinica 2 chisla)\n"; // edinica
	cin >> b1;
	cout << "Vvedite b2(desyatok 2 chisla)\n"; // desyatok
	cin >> b2;
	d=a2*10; // desyatok 1 chisla
	e=b2*10; // desyatok 2 chisla
	a=d+a1; // 1 chislo
	b=e+b1; // 2 chislo
	c=a+b; // summa 2 chisel
	cout << c << endl;
	return 0;
}