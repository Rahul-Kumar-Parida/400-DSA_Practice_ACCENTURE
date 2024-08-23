#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    string str;
    char ss;
    cin >> str;
    cin >> ss;
    unordered_map<char, int> newS;
    for (int i = 0; i < str.length(); i++)
    {
        newS[str[i]]++;
    }
    int maxNum = 0;
    char maxChar = ' ';
    for (auto &ch : newS)
    {
        if (ch.second > maxNum || (ch.second == maxNum && ch.first < maxChar))
        {
            maxNum = ch.second;
            maxChar = ch.first;
        }
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == maxChar)
        {
            str[i] = ss;
        }
    }

    cout << str << endl;
    return 0;
}