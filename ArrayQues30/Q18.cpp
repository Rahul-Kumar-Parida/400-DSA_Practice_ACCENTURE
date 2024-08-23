#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int totalSumN = n * (n + 1) / 2;
    int divSum = 0;
    for (int i = m; i <= n; i += m)
    {
        divSum += i;
    }

    int sumOfNodiv = totalSumN - divSum;

    cout << sumOfNodiv - divSum << endl;

    return 0;
}