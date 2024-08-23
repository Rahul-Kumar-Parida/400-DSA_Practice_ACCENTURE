#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    // Discriminant
    double d = b * b - 4 * a * c;

    if (d > 0)
    {
        // Two distinct real roots
        double root1 = (-b + sqrt(d)) / (2 * a);
        double root2 = (-b - sqrt(d)) / (2 * a);
        cout << root1 << " " << root2 << endl;
    }
    else if (d == 0)
    {
        // One real root (repeated)
        double root = -b / (2 * a);
        cout << root << " " << root << endl;
    }
    else
    {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-d) / (2 * a);
        cout << realPart << " + " << imaginaryPart << "i" << endl;
        cout << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
