#include <iostream>
using namespace std;

int NumberOfCarries(int n1, int n2)
{
    int carryCount = 0;
    int digit = 0;
    while (n1 > 0 || n2 > 0 || digit > 0)
    {
        int d1 = n1 % 10;
        int d2 = n2 % 10;

        int sum = d1 + d2 + digit;
        if (sum > 9)
        {
            carryCount++;
            digit = 1;
        }
        else
        {
            digit = 0;
        }

        n1 /= 10;
        n2 /= 10;
    }

    return carryCount;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int ans = NumberOfCarries(n1, n2);
    cout << ans << endl;
    return 0;
}