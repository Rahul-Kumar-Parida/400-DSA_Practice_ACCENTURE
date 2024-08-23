// Check if a given string is palindrome or not
#include <iostream>
#include <string>
using namespace std;

bool isPalendrome(string str)
{
    int left = 0;
    int right = str.length() - 1;
    while (left < right)
    {
        if (str[left] != str[right])
        {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main()
{
    string str;
    cin >> str;
    int n = str.length();
    if (isPalendrome(str))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}
