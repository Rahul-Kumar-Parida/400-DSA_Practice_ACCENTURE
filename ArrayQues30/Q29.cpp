#include <iostream>
using namespace std;

int main()
{
    int c, n;
    cin >> c >> n;
    if (c < n)
    {
        if (n % c == 0)
        {
            cout << n / c << endl;
        }
        else
        {
            cout << n / c + 1 << endl;
        }
    }
    else
    {
        cout << 1 << endl;
    }
    return 0;
}