#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(0, "RUS");
   double sumg = 0, dobg = 1.0, sump = 0, dobp = 1.0;
    int noryad = 0, nostolb = 0, str, stl;
    double dobryad = 1.0, sumryad = 0, dobstolb = 1.0, sumstolb = 0, max = 0;
    const int N = 4;
    double a[N][N] = {
        {2.3,-5.0,6.2,12.0},
        {10.3,0.23,32.6,8.33},
        {-7.1, 4.0, 0.25, 9.0},
        {-1.0,-7.7,8.0,1.98}, };
    cout << "Вихiдна матриця Z: " << endl;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << setw(5) << a[i][j];
            cout << "";
        }
        cout << '\n';
    }
    for (int i = 0; i < N; i++)//Нахождение максимального элемента и его положения
    {
        for (int j = 0; j < N; j++)
        {

            if (a[i][j] > max)
            {
                max = a[i][j];
                str = i;
                stl = j ;
            }
        }
    }
    cout << "\nМаксимальний елемент:  " << max << " розташовано у " << str << " рядку, " << stl << " стовбцi." << endl;
    cout << '\n';
    cout << "Введiть номер рядка: ";
    cin >> noryad;
    for (int j = 0; j < N; ++j)
    {
        sumryad += a[noryad][j];//Работает правильно сложение
        dobryad *= a[noryad][j];//Работает правильно умножение
        cout << "";
    }
    cout << "Сума елементiв " << noryad << " рядка: " << sumryad << endl;
    cout << "Добуток елементiв " << noryad << " рядка: " << dobryad << endl;
    cout << '\n' << endl;

    cout << "Введiть номер стовбця: ";
    cin >> nostolb;
    for (int i = 0; i < N; ++i)
    {
        sumstolb += a[i][nostolb];//Работает правильно сложение
        dobstolb *= a[i][nostolb];//Работает правильно умножение
        cout << "";
    }
    cout << "Сума елементiв " << nostolb << " стовбця: " << sumstolb << endl;
    cout << "Добуток елементiв " << nostolb << " стовбця: " << dobstolb << endl;
    cout << "" << endl;
    cout << "Головна дiагональ:" << endl;
    for (int i = 0, j = 0; i < N, j < N; ++i, ++j)
    {
        sumg += a[i][j];
        dobg *= a[i][j];
    }
    cout << "Cума = " << sumg << " | Добуток = " << dobg << endl;
    cout << '\n';
    cout << "Побiчна дiагональ:" << endl;
    for (int i = N - 1, j = 0; i >= 0, j < N; --i, ++j)
    {
        sump += a[i][j];
        dobp *= a[i][j];
    }
    cout << "Сума = " << sump << " | Добуток = " << dobp << endl;

}
