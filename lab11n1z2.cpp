#include <iostream>
#include <conio.h>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    setlocale(0, "RUS");
    srand(time(0));
    const int N = 7;
    int a[N][N];
    int sum = 0;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            a[i][j] = rand() % 99 - 49;
            cout << setw(4) << a[i][j];
        }
        cout << '\n';
    }
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (abs(a[i][j]) % 2 == 1 && a[i][j] < 0)//нечетность и меньше нуля
            {
                sum += abs(a[i][j]);
                //cout << "sum= " << sum << endl;//Отладочный
            }
        }
    }
    cout << "" << endl;
    cout << "Сумма всех нечётных отрицательных элементов массива = " << sum << endl;
}
