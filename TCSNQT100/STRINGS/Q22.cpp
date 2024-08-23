// Write a program to sort characters in a string
#include <iostream>
#include <string>
using namespace std;
int main()
{

    string str;
    cin >> str;
    int n = str.length();
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (str[j] > str[j + 1])
            {
                swap(str[j], str[j + 1]);
            }
        }
    }
    cout << str << endl;
    return 0;
}
