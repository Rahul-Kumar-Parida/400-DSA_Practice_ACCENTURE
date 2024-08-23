// Write a program to find a word in a given string which has the highest number of repeated letters
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int MaxFreq(string arr)
{
    int maxi = 0;
    unordered_map<char, int> news;
    for (char ch : arr)
    {
        if (isalpha(ch))
        {
            news[tolower(ch)]++;
        }
    }
    for (const auto &ch : news)
    {
        if (ch.second > maxi)
        {
            maxi = ch.second;
        }
    }

    return maxi;
}
int main()
{
    string str;
    getline(cin, str);
    int n = str.length();
    string res;
    int i = 0, j = 0;
    int zero = 0;
    while (i < n)
    {
        while (i < n && str[i] == ' ')
        {
            i++;
        }
        j = i + 1;
        while (j < n && str[j] != ' ')
        {
            j++;
        }
        if (i < j)
        {
            string w = str.substr(i, j - i);
            int maxi = MaxFreq(w);
            if (maxi > zero)
            {
                zero = maxi;
                res = w;
            }
        }
        i = j + 1;
    }

    cout << res << endl;
    return 0;
}
