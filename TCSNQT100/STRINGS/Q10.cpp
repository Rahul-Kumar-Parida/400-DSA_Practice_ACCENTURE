// Capitalize first and last character of each word
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cctype>

using namespace std;

string processWord(string word)
{
    if (word.length() == 0)
        return "";
    string process;

    process += toupper(word[0]);
    for (int i = 1; i < word.length() - 1; i++)
    {
        process += word[i];
    }
    if (word.size() > 1)
    {
        process += toupper(word[word.size() - 1]);
    }

    return process;
}
int main()
{
    string str;
    getline(cin, str);
    stringstream ss(str);
    vector<string> array;
    string word;

    while (ss >> word)
    {
        array.push_back(processWord(word));
    }

    for (const auto &w : array)
    {
        cout << w << " ";
    }
    return 0;
}
