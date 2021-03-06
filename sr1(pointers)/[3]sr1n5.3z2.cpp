//Используя имя массива как указатель, и применяя адресную арифметику выполнить задание.
//Дан одномерный массив, состоящий из N вещественных элементов.
//2.1.Заполнить массив случайными числами. ++
//2.2.Найти минимальный положительный элемент. ++
//2.3.Вычислить произведение не нулевых элементов массива. ++
//2.4.Вывести ненулевые элементы на экран в обратном порядке. ++ 
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(0, "RUS");
    srand(time(0));
    const int N = 15;
    const int* pN(&N);
    int a[N] = { 0 };
    int* pa = a;
    int min = 0, k = 0, t = 1, ty = 1;
    int* pmin(&min), * pk(&k), * pt(&t);
    // 2.1
    for (int i = 0; i < *pN; i++)
    {
        pa[i] = rand() % 20 - 15;
        cout << "|" << "a[" << i << "]=" << pa[i] << endl;
    }
    cout << endl;
    system("pause");
    cout << endl;
    //2.2
    for (int i = 0; i < *pN; i++)
    {
        if (pa[i] > 0) k++; //положительные элементы
        if (pa[i] > 0 && (*pk == 1 || pa[i] < *pmin)) *pmin = pa[i]; //минимальный из положительных
    }
    cout << "Минимальный положительный элемент массива: " << *pmin << endl;
    //2.3
    cout << endl;
    system("pause");
    cout << endl;
    for (int i = 0; i < *pN; i++)
    {
        if (pa[i] > 0 || pa[i] < 0)
        {
            t *= pa[i]; 
            //cout << t << endl;//отладочный ( ПРОВЕРКА )
        }
    }
    cout << "Произведение ненулевых элементов массива: " << *pt << endl;
    //2.4
    cout << endl;
    system("pause");
    cout << endl;
    cout << "Вывести ненулевые элементы на экран в обратном порядке: " << endl;
    for (int i = 14; i > 0; i--)
    {
        if (pa[i] > 0 || pa[i] < 0)
        {
            cout << "|" << "a[" << i << "]=" << pa[i] << endl;
        }
    }
}
