#include <iostream>
using namespace std;
int main()
{
    string str;
    char s1, s2;
    cin >> str;
    cin >> s1 >> s2;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == s1)
        {
            str[i] = s2;
        }
        else if (str[i]== s2)
        {
            str[i] = s1;
        }
    }

    cout << str << endl;
    return 0;
}