#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string t = "";
    for (char ch : s)
    {
        t = ch + t;
    }
    if (s == t)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}