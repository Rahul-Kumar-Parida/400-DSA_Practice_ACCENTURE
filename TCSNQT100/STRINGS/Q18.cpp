#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int n = str.length();
    unordered_map<char, int> freq;
    for (char ch : str)
    {
        freq[ch]++;
    }
    bool notfound = false;
    for (auto ch : freq)
    {
        if (ch.second > 1)
        {
            cout << ch.first << " ";
            notfound = true;
        }
    }

    if (!notfound)
    {
        cout << -1 << endl;
    }

    return 0;
}