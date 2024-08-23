#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int totalSumN = n * (n + 1) / 2;
    int k = n / m;
    int divSum = m * k * (k + 1) / 2; // Sum of multiples of m from m to n
    int Notdiv = totalSumN - divSum;

    cout << Notdiv - divSum << endl;

    return 0;
}