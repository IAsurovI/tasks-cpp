#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int dob, ned, rik,rik1;
	dob = (60 * 60 * 24);
	cout << "В сутках " << dob << " ceкунд" << endl;
	ned = dob * 7;
	cout << "В неделе " << ned << " секунд" << endl;
	rik = dob * 365;
	rik1 = dob * 366;
	cout << "В году " << rik << " секунд" << endl;
	cout << "В високосном году " << rik1 << " секунд" << endl;
}