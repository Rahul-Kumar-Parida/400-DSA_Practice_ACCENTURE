// Maximum and Minimum digit in a number
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int maxNum = -1;
    int minNum = 10;

    while (n != 0)
    {
        int digit = n % 10;
        if (digit > maxNum)
        {
            maxNum = digit;
        }
        if (digit < minNum)
        {
            minNum = digit;
        }

        n /= 10;
    }

    cout << maxNum << " " << minNum;

    return 0;
}
