// Reverse words in a string
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int n = str.length();
    string res = "";
    int i = 0, j = 0;
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
            res = w + " " + res;
        }
        i = j + 1;
    }

    cout << res << endl;
    return 0;
}
