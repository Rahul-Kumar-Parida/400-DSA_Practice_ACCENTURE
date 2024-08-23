#include <iostream>
#include <cmath>
#include <set>
using namespace std;
int roundNum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum += pow(digit, 2);
        n /= 10;
    }

    return sum;
}

bool isHappy(int n)
{
    set<int> s;
    s.insert(n);

    while (1)
    {
        if (n == 1)
        {
            return true;
        }

        n = roundNum(n);
        if (s.find(n) != s.end())
        {
            return false;
        }
        s.insert(n);
    }

    return false;
}
int main()
{
    int n;
    cin >> n;

    if (isHappy(n))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}