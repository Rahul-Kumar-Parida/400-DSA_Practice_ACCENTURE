#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int c, a, b;
    cin >> c >> a >> b;

    switch (c)
    {
    case 1:
        cout << a + b << endl;
        break;
    case 2:
        cout << abs(a - b) << endl;
        break;
    case 3:
        cout << a * b << endl;
        break;
    case 4:
        if (b != 0)
        {
            cout << a / b << endl;
            break;
        }
        else
        {
            cout << -1 << endl;
            break;
        }
    default:
        cout << -1 << endl;
        break;
    }

    return 0;
}