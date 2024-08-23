// Change case of each character in a string
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    string news = "";
    for (char ch : str)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            news += ch + 32;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            news += ch - 32;
        }
        else if (ch == ' ')
        {
            news += " ";
        }
        else
        {
            news += ch;
        }
    }

    cout << news << endl;
    return 0;
}
