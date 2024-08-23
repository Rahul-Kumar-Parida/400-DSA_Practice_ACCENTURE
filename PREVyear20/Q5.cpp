#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int totalSum = m * (m + 1) / 2;
    int divSum = 0;
    for (int i = n; i <= m; i++)
    {
        if (i % n == 0)
        {
            divSum += i;
        }
    }
    int notDiv = totalSum - divSum;

    cout << abs(notDiv - divSum);
    return 0;
}