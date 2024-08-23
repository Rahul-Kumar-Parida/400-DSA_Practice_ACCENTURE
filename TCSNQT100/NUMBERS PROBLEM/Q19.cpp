// Power of a number

#include <iostream>
using namespace std;

int main()
{
    int base, exp;
    cin >> base >> exp;
    long long totalExp = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            totalExp *= base;
        }

        base *= base;
        exp /= 2;
    }

    cout << totalExp << endl;
    return 0;
}