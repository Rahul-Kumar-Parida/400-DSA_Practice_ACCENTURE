#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    char c1, c2;
    cin >> str >> c1 >> c2;

    if (c1 != c2)
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

    cout << str << endl;

    return 0;
}