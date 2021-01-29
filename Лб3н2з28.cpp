#include <iostream>
#include <cmath>

using namespace std;

double Average(double x[], int n)
{
    double ave = 0;
    for (int i = 0; i < n; i++) ave += x[i];
    ave /= n;
    return ave;
}

double Frms(double x[], double a, int n)
{
    double rms = 0;
    for (int i = 0; i < n; i++) rms += pow(x[i] - a, 2);
    rms /= (n - 1.0);
    rms = sqrt(rms);
    return rms;
}

int main()
{
    double r = 0;
    int n;
    cin >> n;
    double* x = new double[n];
    double* y = new double[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        cin >> y[i];
    }
    for (int i = 0; i < n; i++) r += (x[i] - Average(x, n)) * (y[i] - Average(y, n));
    r /= n * Frms(x, Average(x, n), n) * Frms(y, Average(y, n), n);
    cout << "r = " << r;
    return 0;
}