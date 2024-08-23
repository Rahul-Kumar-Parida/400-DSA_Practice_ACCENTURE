#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    switch (a)
    {
    case 1:
        ans = b + c;
        break;
    case 2:
        ans = b - c;
        break;
    case 3:
        ans = b * c;
        break;
    case 4:
        ans = b / c;
        break;

    default:
        break;
    }

    cout << ans << endl;
    return 0;
}