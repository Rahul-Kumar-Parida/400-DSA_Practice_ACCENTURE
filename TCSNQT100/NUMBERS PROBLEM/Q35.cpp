// Program to find roots of a Quadratic Equation

#include <iostream>
#include <cmath>
#include <complex>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double d = (b * b) - 4 * a * c;
    if (d > 0)
    {
        double root1 = (-b + sqrt(d)) / (2 * a);
        double root2 = (-b - sqrt(d)) / (2 * a);
        cout << root1 << " " << root2;
    }
    else if (d == 0)
    {
        double root = -b / (2 * a);
        cout << root << endl;
    }
    else
    {
        complex<double> root1 = complex<double>(-b / (2.0 * a), sqrt(-d) / (2.0 * a));
        complex<double> root2 = complex<double>(-b / (2.0 * a), -sqrt(-d) / (2.0 * a));

        cout << root1 << " " << root2;
    }

    return 0;
}
