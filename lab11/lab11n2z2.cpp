#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(0, "RUS");
    srand(time(0));
    const int N = 4;
    int a[N][N] = {
        {0,1,0,1},
        {1,0,1,0},
        {0,1,0,1},
        {1,0,1,0},
    };
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << setw(2) << a[i][j];
            cout << "";
        }
        cout << '\n';
    }
}