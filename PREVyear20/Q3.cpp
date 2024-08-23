// Paaward checker
#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
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
    bool checkdigit = false;
    bool checkupper = false;
    for (char ch : str)
    {
        if (isdigit(ch))
        {
            checkdigit = true;
        }
        else if (isupper(ch))
        {
            checkupper = true;
        }
        else if (ch == ' ' || ch == '/')
        {
            cout << 0 << endl;
            return 0;
        }
    }

    if (checkdigit && checkupper)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}