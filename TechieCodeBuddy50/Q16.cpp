//  Given two strings s and t, return true if  t is an anagram of s, and false otherwise
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    unordered_map<char, int> s1;
    if (str1.length() != str2.length())
    {
        cout << "no" << endl;
        return 0;
    }
    for (char ch : str1)
    {
        s1[ch]++;
    }
    for (char ch : str2)
    {
        if (s1.find(ch) == s1.end() || s1[ch] == 0)
        {
            cout << "no" << endl;
            return 0;
        }
        s1[ch]--;
    }

    cout << "yes" << endl;

    return 0;
}
