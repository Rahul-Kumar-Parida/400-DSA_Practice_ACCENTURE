#include <iostream>
using namespace std;

int reverse(int n)
{

    int rev = 0;
    while (n > 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return rev;
}
int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = m; i <= n; i++)
    {
        if (i == reverse(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}