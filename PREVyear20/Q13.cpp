#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    int maxi = -1;
    int ans = 0;

    for (int i = m; i <= n; i++)
    {
        int res = i;
        int count = 0;
        if (res % 2 == 0)
        {
            while (res > 0 && res % 2 == 0)
            {
                count++;
                res /= 2;
            }
        }

        if (count > maxi)
        {
            maxi = count;
            ans = i;
        }
        else if (count == maxi && i < ans)
        {
            ans = i;
        }
    }

    cout << ans << endl;
    return 0;
}
