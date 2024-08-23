#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int i = 0, j = 0;
    int n = str.length();
    string newstr;
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
            newstr = w + " " + newstr;
        }
        i = j + 1;
    }

    cout << newstr << endl;
    return 0;
}