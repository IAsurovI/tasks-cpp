//7. Дан одномерный массив, состоящий из N целочисленных элементов.
//7.1.Ввести массив с клавиатуры.++
//7.2.Найти минимальный положительный элемент.++
//7.3.Вычислить сумму положительных элементов массива, кратных 3.++
//7.4.Вывести не нулевые элементы на экран.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(0, "RUS");
    srand(time(0));
    int N;
    cout << "Введите размер массива: ";
    cin >> N;
    int* a = new int[N];
    const int* pN(&N);
    int* pa = a;
    int min = 0, k = 0, t = 0;
    int* pmin(&min), * pk(&k), * pt(&t);
    cout << endl;
    // 7.1
    for (int i = 0; i < *pN; i++)
    {
        cout << "Введите целое число, находящееся в " << i << " ячейке массива: ";
        cin >> pa[i];
    }
    cout << endl;
    system("pause");
    cout << endl;
    //7.2
    for (int i = 0; i < *pN; i++)
    {
        if (pa[i] > 0) k++; //положительные элементы
        if (pa[i] > 0 && (*pk == 1 || pa[i] < *pmin)) *pmin = pa[i]; //минимальный из положительных
    }
    cout << "Минимальный моложительный элемент массива: " << *pmin << endl;
    cout << endl;
    system("pause");
    cout << endl;
    //7.3
    for (int i = 0; i < *pN; i++)
    {
        if (pa[i] > 0.0 && pa[i]%3==0)
        {
            t += pa[i];
            //cout << t << endl;//отладочный ( ПРОВЕРКА )
        }
    }
    cout << "Сумма положительных элементов массива, кратных трём: " << *pt << endl;
    cout << endl;
    system("pause");
    cout << endl;
    //7.4
    cout << "Ненулевые элементы массива: " << endl;
    for (int i = 0; i <*pN; i++)
    {
        if (pa[i] > 0 || pa[i] < 0)
        {
            cout << "|" << "a[" << i << "]=" << pa[i] << endl;
        }
    }
}
