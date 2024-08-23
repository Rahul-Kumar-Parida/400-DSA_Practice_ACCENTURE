// Check if two strings are anagram of each other

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    if (str1.length() != str2.length())
    {
        cout << "no" << endl;
        return 0;
    }

    unordered_map<char, int> s1;
    unordered_map<char, int> s2;

    for (char ch : str1)
    {
        s1[ch]++;
    }

    for (char ch : str2)
    {
        s2[ch]++;
    }

    if (s1 == s2)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}