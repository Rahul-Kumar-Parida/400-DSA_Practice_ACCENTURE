#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long ans = (n * (n + 1) / 2)+1;
    cout << ans % 100000007 << endl;
    return 0;
}