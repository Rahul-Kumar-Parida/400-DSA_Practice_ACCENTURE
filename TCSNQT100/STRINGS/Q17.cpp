// Remove all duplicates from the input string.
#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;
    unordered_set<char> uniq;
    string res = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (uniq.find(str[i]) == uniq.end())
        {
            uniq.insert(str[i]);
            res += str[i];
        }
    }

    cout << res << endl;
    return 0;
}
