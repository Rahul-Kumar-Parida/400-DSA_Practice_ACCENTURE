#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;
    cin >> s1;
    int n = s1.length();
    if (n % 2 == 0)
    {
        cout << -1 << endl;
        return 0;
    }
    int result = (s1[0] == '1') ? 1 : 0;
    for (int i = 1; i < n; i += 2)
    {
        char op = s1[i];
        int val = (s1[i + 1]) ? 1 : 0;
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