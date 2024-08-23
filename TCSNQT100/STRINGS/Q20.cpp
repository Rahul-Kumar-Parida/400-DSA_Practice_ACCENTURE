// Change every letter with the next lexicographic alphabet in the given string
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string news = "";
    for (char ch : s)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            if (ch == 'Z')
            {
                news += 'A';
            }
            else
            {
                news += ch + 1;
            }
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'z')
            {
                news += 'a';
            }
            else
            {
                news += ch + 1;
            }
        }
    }

    cout << news << endl;
    return 0;
}
