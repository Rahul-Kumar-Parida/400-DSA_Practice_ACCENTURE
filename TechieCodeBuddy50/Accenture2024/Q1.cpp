#include <iostream>
#include <string>
#include <unordered_map>
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
    for (char it : str1)
    {
        s1[it]++;
    }
    for (char it : str2)
    {
        s1[it]--;
    }
    bool check = true;
    for (auto &it : s1)
    {
        if (it.second != 0)
        {
            check = false;
            break;
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