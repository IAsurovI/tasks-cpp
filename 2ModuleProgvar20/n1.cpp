#include <iostream>
using namespace std;
void main()
{
    int desch;
    int c;
    cin >> desch;

    while (desch != 0) {
        c = desch % 2;
        desch /= 2;
        cout << c;
    }
}
