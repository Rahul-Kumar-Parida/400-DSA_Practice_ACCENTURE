// Find the sum of the divisors for the N integer number.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i)
            {
                sum += n / i;
            }
        }
    }
    cout << sum << endl;
    return 0;
}