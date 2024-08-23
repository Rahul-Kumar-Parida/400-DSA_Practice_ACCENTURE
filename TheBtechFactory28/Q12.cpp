// The function needs to reverse the order of the words in the string.
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int n = str.length();
    int i = 0, j = 0;
    vector<string> newstr;
    while (i < n)
    {
        while (i < n && str[i] == ' ')
        {
            i++;
        }
        j = i;
        while (j < n && str[j] != ' ')
        {
            j++;
        }
        if (i < j)
        {
            newstr.push_back(str.substr(i, j - i));
        }
        i = j + 1;
    }
    for (int i = newstr.size() - 1; i >= 0; i--)
    {
        cout << newstr[i] << " ";
    }
    return 0;
}