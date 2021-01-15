//В трехзначном числе х зачеркнули первую цифру. Когда оставшееся
//число умножили на 10, а произведение сложили с первой цифрой числа х,
//то получилось число 564. Найти число х
#include <iostream>
using namespace std;
int main() {
	int a,b,c,d; // cifra 456
	a=4;
	d=(564-4)/10; // ostavsheesa chislo
	c=a*100;
	b=c+d;
	cout <<"X=" << b << endl;
	return 0;
}
