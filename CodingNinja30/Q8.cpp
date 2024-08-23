#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    switch (c)
    {
    case 1:
        cout << a + b << endl;
        break;
    case 2:
        cout << a - b << endl;
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