#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int sum = 0;
    for (int i = m; i <= n; i++)
    {
        if (i % 15 == 0)
        {
            sum += i;
        }
    }

    cout << sum << endl;
    return 0;
}