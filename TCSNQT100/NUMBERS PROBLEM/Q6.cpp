// Check if a number is perfect number

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 1;
    if (n <= 0)
    {
        cout << false;
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i != n / i) // Avoid adding the square root twice if it's a perfect square
                sum += i + n / i;
            else
                sum += i;
        }
    }
    if (n == sum)
    {
        cout << true;
    }
    else
    {
        cout << false;
    }

    return 0;
}
