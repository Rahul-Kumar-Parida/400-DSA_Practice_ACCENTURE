#include <iostream>
#include <string>
using namespace std;

void replaceCharacter(string &str, char c1, char c2)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == c1)
        {
            str[i] = c2;
        }
        else if (str[i] == c2)
        {
            str[i] = c1;
        }
    }
}

int main()
{
    string str;
    cin >> str;
    char c1, c2;
    cin >> c1 >> c2;
    replaceCharacter(str, c1, c2);
    cout << str << endl;
    return 0;
}