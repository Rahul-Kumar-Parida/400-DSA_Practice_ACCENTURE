#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    string news = "";
    unordered_set<char> Set;
    for (char ch : s2)
    {
        Set.insert(ch);
    }

    for (char ch : s1)
    {
        if (Set.find(ch) == Set.end())
        {
            news += ch;
        }
    }

    cout << news << endl;
    return 0;
}