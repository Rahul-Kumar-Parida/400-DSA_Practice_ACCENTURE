// Write a program to find the largest word in a given string.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int n = str.length();
    int i = 0, j = 0;
    string res;
    int maxi = 0;
    while (i < n)
    {
        while (i < n && str[i] == ' ')
        {
            i++;
        }
        j = i + 1;
        while (j < n && str[j] != ' ')
        {
            j++;
        }
        if (i < j)
        {
            string w = str.substr(i, j - i);
            if (w.length() > maxi)
            {
                maxi = w.length();
                res = w;
            }
        }
        i = j + 1;
    }

    cout << res << endl;
    return 0;
}
