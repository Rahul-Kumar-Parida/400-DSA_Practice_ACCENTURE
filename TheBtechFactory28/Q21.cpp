// The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << "0" << endl;
        return 0;
    }
    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }
    int a = 0;
    int b = 1;
    int c = 0;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    cout << c << endl;
    return 0;
}