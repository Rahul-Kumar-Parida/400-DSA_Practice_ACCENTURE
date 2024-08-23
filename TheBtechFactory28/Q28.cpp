// find the sum of Natural Numbers using Recursion
#include <iostream>
using namespace std;
int sumofnum(int n)
{
    if (n == 0)
        return 0;
    return n + sumofnum(n - 1);
}
int main()
{
    int n;
    cin >> n;
    int ans = sumofnum(n);
    cout << ans << endl;
    return 0;
}