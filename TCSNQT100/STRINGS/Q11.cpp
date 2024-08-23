// Calculate frequency of characters in a string

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    string str;
    cin >> str;
    unordered_map<char, int> Map;

    for (char ch : str)
    {
        Map[ch]++;
    }
    cout << "{";
    bool first = true;
    for (const auto &n : Map)
    {
        if (!first)
        {
            cout << ", ";
        }
        cout << "'" << n.first << "': " << n.second;
        first = false;
    }
    cout << "}" << endl;
    return 0;
}
