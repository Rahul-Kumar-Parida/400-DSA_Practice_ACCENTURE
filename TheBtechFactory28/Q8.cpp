// anagram problem
#include <iostream>
#include <unordered_map>
#include <string>
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
    for (int ch : str2)
    {
        s1[ch]--;
    }
    bool check = true;
    for (const auto &ch : s1)
    {
        if (ch.second != 0)
        {
            check = false;
        }
    }

    if (check)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}