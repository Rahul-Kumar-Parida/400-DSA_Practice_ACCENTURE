#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    unordered_map<char, int> m1;
    unordered_map<char, int> m2;
    for (char ch : s1)
    {
        m1[ch]++;
    }
    for (char ch : s2)
    {
        m2[ch]++;
    }

    if (m1 == m2)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}