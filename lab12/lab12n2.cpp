#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(0, "RUS");
    srand(time(0));
    const int N = 4;
    int a[N][N] = {
        {4,8,11,5},
        {2,12,9,14},
        {0,5,0,7},
        {1,6,3,4}, };
    cout << "Вихiдна матриця: " << endl;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << setw(3) << a[i][j];
            cout << "";
        }
        cout << '\n';
    }
    cout << "Обмiняв мiсцями нульовий i третiй рядки: " << endl;
    for (int j = 0; j < N; ++j)
    {
        int vrem;
        vrem = a[0][j];
        a[0][j] = a[3][j];
        a[3][j] = vrem;
    }
    cout << '\n';
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << setw(3) << a[i][j];
            cout << "";
        }
        cout << '\n';
    }
cout << "Обмiняв мiсцями перший i третiй стовпцi: " << endl;
for (int i = 0; i < N; ++i)
{
    int vrem;
    vrem = a[i][1];
    a[i][1] = a[i][3];
    a[i][3] = vrem;
}
cout << '\n';
for (int i = 0; i < N; ++i)
{
    for (int j = 0; j < N; ++j)
    {
        cout << setw(3) << a[i][j];
        cout << "";
    }
    cout << '\n';
}
}
