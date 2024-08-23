#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    if (str.length() < 4)
    {
        cout << 0 << endl;
        return 0;
    }
    if (isdigit(str[0]))
    {
        cout << 0 << endl;
        return 0;
    }
    bool hasDigit = false;
    bool hasUpper = false;
    for (char ch : str)
    {
        if (isdigit(ch))
        {
            hasDigit = true;
        }
        else if (isupper(ch))
        {
            hasUpper = true;
        }
        else if (ch == ' ' || ch == '/')
        {
            cout << false;
            return 0;
        }
    }

    if (hasDigit && hasUpper)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}