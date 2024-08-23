// Return maximum occurring character in the input string
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    string str;
    cin >> str;
    unordered_map<char, int> charFreq;
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        charFreq[str[i]]++;
    }
    int maxi = -1;
    for (auto ch : charFreq)
    {
        if (ch.second > maxi)
        {
            maxi = ch.second;
        }
    }
    for (auto ch : charFreq)
    {
        if (maxi == ch.second)
        {
            cout << ch.first << endl;
            return 0;
        }
    }
    return 0;
}
