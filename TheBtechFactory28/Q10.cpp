// The function accepts a string str as its argument. The function needs to return the transformed string by replacing all occurrences of the character a with the character b and vice versa.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a')
        {
            str[i] = 'b';
        }
        else if (str[i] == 'b')
        {
            str[i] = 'a';
        }
    }
    cout << str << endl;
    return 0;
}