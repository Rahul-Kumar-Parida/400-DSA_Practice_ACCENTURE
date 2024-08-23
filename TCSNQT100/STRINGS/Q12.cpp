// Find Non-repeating characters of a String

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    string str;
    cin >> str;
    unordered_map<char, int> Map;
    string news = "";
    for (char ch : str)
    {
        Map[ch]++;
    }

    for (char ch : str)
    {
        if (Map[ch] == 1)
        {
            cout << ch<<" ";
        }
    }

    return 0;
}
