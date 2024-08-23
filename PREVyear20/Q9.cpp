#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string str1 = "";
    string str2 = "";

    if (str.length() == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '-')
        {
            str1 += str[i];
        }
        else
        {
            str2 += str[i];
        }
    }
    cout << str1 + str2 << endl;
    return 0;
}