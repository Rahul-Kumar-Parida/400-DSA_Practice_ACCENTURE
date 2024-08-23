#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    // check length
    if (s1.length() != s2.length())
    {
        cout << "No" << endl;
        return 0;
    }
    // lower convert
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
        {
            s1[i] = s1[i] + 32;
        }
    }
    for (int i = 0; i < s2.length(); i++)
    {
        if (s2[i] >= 'A' && s2[i] <= 'Z')
        {
            s2[i] = s2[i] + 32;
        }
    }
    unordered_map<char, int> new1;
    for (char ch : s1)
    {
        new1[ch]++;
    }
    for (char ch : s2)
    {
        new1[ch]--;
    }
    bool check = true;
    for (const auto &ch : new1)
    {
        if (ch.second != 0)
        {
            check = false;
            break;
        }
    }

    if (check)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}