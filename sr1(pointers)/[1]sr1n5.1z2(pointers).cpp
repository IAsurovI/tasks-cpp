//Вычислить площадь окружности по 
//заданному радиусу
#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "RUS");
    const float pi = 3.14159;
    float r;
    float s;
    float* pr(&r);
    float* ps(&s);
    const float* ppi(&pi);
    cout << "Введите радиус: ";
    cin >> r;
    cout << *pr << endl;//otladka
    s = *ppi * pow(*pr, 2);
    cout << "Площадь окружности по заданному радиусу = " << *ps << endl;
}
