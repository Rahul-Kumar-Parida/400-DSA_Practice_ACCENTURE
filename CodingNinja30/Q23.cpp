#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int n = str.length();
    int i = 0, j = 0;
    string result = "";
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
            result = w + " " + result;
        }

        i = j + 1;
    }

    cout << result << endl;

    return 0;
}