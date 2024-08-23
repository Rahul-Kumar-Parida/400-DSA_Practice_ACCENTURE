#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int rem = n % m;
    if (rem == 0)
    {
        cout << n << endl;
    }
    else if (rem <= m / 2)
    {
        cout << n - rem << endl;
    }
    else
    {
        cout << n + (m - rem) << endl;
        ;
    }
    return 0;
}