// Convert decimal to octal
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    int octal = 0;
    while (n > 0)
    {
        int rem = n % 8;
        octal += rem * i;
        i *= 10;
        n /= 8;
    }
    cout << octal << endl;

    return 0;
}
