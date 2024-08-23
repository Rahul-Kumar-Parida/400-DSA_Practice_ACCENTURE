#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    string str1;
    cin >> str1;
    string str2;
    cin >> str2;
    string res1 = "";
    string res2 = "";
    // remove space
    for (char ch : str1)
    {
        if (!isspace(ch))
        {
            res1 += tolower(ch);
        }
    }
    for (char ch : str2)
    {
        if (!isspace(ch))
        {
            res2 += tolower(ch);
        }
    }
    // convert lower

    // check length
    if (res1.length() != res2.length())
    {
        cout << -1 << endl;
    }

    unordered_map<char, int> freq1, freq2;

    for (char ch : res1)
    {
        freq1[ch]++;
    }
    for (char ch : res2)
    {
        freq2[ch]++;
    }

    if (freq1 == freq2)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}