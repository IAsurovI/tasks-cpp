#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    setlocale(0, "RUS");
    const int N = 8;
    int a[N][N];
    int b[N * N] = { 0 };
    int c[N * N] = { 0 };
    int d[N * N] = { 0 };
    int T = 0, R = 0, S = 0;
    cout << "Исходный массив: " << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            a[i][j] = 32 - rand() % 65;
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
    //начало счёта чисел, кратных 3
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (a[i][j] % 3 == 0)
                b[T++] = a[i][j];
        }
    }
    cout << "Числа, кратные 3: ";//вывод чисел, кратных 3
    cout << '\n';
    for (int j = 0; j < T; j++)
    {
        cout << b[j] << ' ';
    }
    cout << '\n';
    //конец счёта чисел, кратных 3
    //начало счёта чисел, больше нуля
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (a[i][j] > 0)
                c[R++] = a[i][j];

        }
    }
    cout << '\n';
    cout << "Массив чисел, которые больше нуля:   ";//вывод чисел больше нуля
    cout << '\n';
    for (int j = 0; j < R; j++)
    {
        cout << c[j] << ' ';
    }
    cout << '\n';
    //конец счёта чисел, больше нуля
     //начало счёта чисел, меньше нуля
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (a[i][j] < 0)
                d[S++] = a[i][j];
        }
    }
    cout << '\n';
    cout << "Массив чисел, которые меньше нуля: ";  //вывод чисел меньше нуля
    cout << '\n';
    for (int j = 0; j < S; j++)
        cout << d[j] << ' ';
    cout << '\n';
    //конец счёта чисел, меньше нуля
}