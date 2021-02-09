//Дан массив из 7 символов. Проверить, симметричен ли он.
#include<iostream>
#include<string>
using namespace std;
int main()
{
	setlocale(0, "RUS");
	const int size = 7;
	char str[size] = "";
	int r = 0;
	cout << "Введите массив из 7 символов: " << endl;
	cin.getline(str, size, '\n');
	for (int i = 0, j = size - 1; i <= size / 2; i++, j--)
	{
		if (str[i] == str[j])r++;
	}
	if (r == size / 2)cout << "Массив симметричен " << endl;
	else cout << "Массив не симметричен " << endl;
}
