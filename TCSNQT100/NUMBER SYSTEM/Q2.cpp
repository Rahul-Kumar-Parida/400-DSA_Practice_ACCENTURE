// Convert binary to octal

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int decimal = 0;
    int i = 1;
    if (n == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    while (n > 0)
    {
        int digit = n % 10;
        decimal = decimal + digit * i;
        i *= 2;
        n /= 10;
    }
    // decimal to octal;

    int power = 1;
    int octal = 0;
    while (decimal > 0)
    {
        int rem = decimal % 8;
        octal += rem * power;
        power *= 10;
        decimal /= 8;
    }

    cout << octal << endl;

    return 0;
}
