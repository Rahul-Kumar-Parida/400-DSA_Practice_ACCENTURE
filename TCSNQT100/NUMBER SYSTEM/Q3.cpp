// Decimal to Binary conversion

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int binary = 0;
    int i = 1;
    while (n > 0)
    {
        int rem = n % 2;
        binary += rem * i;
        i *= 10;
        n /= 2;
    }

    cout << binary << endl;
    return 0;
}