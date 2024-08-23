#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.length();
    if (n % 2 == 0)
    {
        cout << -1 << endl;
        return 0;
    }

    int result = (str[0] == 'I') ? 1 : 0;
    for (int i = 1; i < n; i += 2)
    {
        char op = str[i];
        int val = (str[i + 1] == 'I') ? 1 : 0;
        switch (op)
        {
        case 'C':
            result ^= val;
            break;
        case 'A':
            result &= val;
            break;
        case 'B':
            result |= val;
            break;

        default:
            break;
        }
    }

    cout << result << endl;

    return 0;
}