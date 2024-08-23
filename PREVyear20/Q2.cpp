// and or xor problem
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int res = str[0]-'0';
    for (int i = 1; i < str.length(); i += 2)
    {
        char ch = str[i];
        switch (ch)
        {
        case 'A':
            res &= str[i + 1]-'0';
            break;
        case 'B':
            res |= str[i + 1]-'0';
            break;
        case 'C':
            res ^= str[i + 1]-'0';
            break;

        default:
            break;
        }
    }

    cout << res << endl;
    return 0;
}