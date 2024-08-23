// AND OR QUESTION

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int result = str[0] - '0';
    for (int i = 1; i < str.length(); i += 2)
    {
        char ch = str[i];
        switch (ch)
        {
        case 'A':
            result &= str[i + 1] - '0';
            break;
        case 'B':
            result |= str[i + 1] - '0';
            break;
        case 'C':
            result ^= str[i + 1] - '0';
            break;

        default:
            break;
        }
    }

    cout << result << endl;
    return 0;
}