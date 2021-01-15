#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    setlocale(0, "RUS");
    string s;
    cout << "Введите число в двоичной системе: ";
    cin >> s;
    cout << "В восьмеричной системе " << s << " = ";
    cout << oct << stoi(s, nullptr, 2) << endl;//stoi(s,nullptr,2)=преобр. строки в числа
}



#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string s;
    do
    {
        cout << "Enter a binary number: ";
        cin.clear();
    } while (!(cin >> s) || (s.find_first_not_of("01") != string::npos));

    cout << s << " = " << oct << stoi(s, nullptr, 2) << endl;
}


#include <iostream>
#include <string>
using namespace std;
const char ch[8] = { '0', '1', '2', '3', '4', '5', '6', '7' };
int R10(string s)
{
    int base = 1,
        res = 0;
    while (s.size())
    {
        res += base * ((int)s[s.size() - 1] - '0');
        s.resize(s.size() - 1);
        base <<= 1;
    }
    return res;
}
string R8(int n)
{
    string s;
    while (n)
    {
        s.insert(s.begin(), ch[n % 8]);
        n /= 8;
    }
    return s;
}
int main()
{
    setlocale(LC_CTYPE, "rus");
    cout << "Введите двоичное число:\n";
    string num;
    cin >> num;
    for (int i = 0; i < num.length(); i++)
    {
        if ((num[i] != '0') && (num[i] != '1'))
        {
            cout << "Вы ввели не двоичное число.\n";
        }
    }
    cout << "Восьмеричное число:\n";
    cout << (R8(R10(num))) << endl;
}

}