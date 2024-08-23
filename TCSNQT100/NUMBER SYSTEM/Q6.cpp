// Convert octal to decimal
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    int decimal = 0;
    while (n > 0)
    {
        int digit = n % 10;
        decimal += digit * i;
        i *= 8;
        n /= 10;
    }
    cout << decimal << endl;
    return 0;
}
