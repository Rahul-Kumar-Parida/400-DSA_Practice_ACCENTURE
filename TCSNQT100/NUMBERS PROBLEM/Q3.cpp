// Check if a number is prime or not
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 2)
    {
        cout << true;
        return 0;
    }
    if (n <= 1 || n % 2 == 0)
    {
        cout << false;
        return 0;
    }

    bool check = true;
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            check = false;
            break;
        }
    }
    if (check)
    {
        cout << true << endl;
    }
    else
    {
        cout << false << endl;
    }

    return 0;
}