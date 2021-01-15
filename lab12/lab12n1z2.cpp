#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(0, "RUS");
    srand(time(0));
    const int N = 4;
    int a[N][N] = {
        {1,3,-8,0},
        {-4,6,2,-5},
        {3,7,0,6},
        {-3,9,11,-2},};
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
    cout << "Перетворена матриця: " << endl;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << setw(3) << fabs(a[i][j]);
            cout << "";
        }
        cout << '\n';
    }
}
