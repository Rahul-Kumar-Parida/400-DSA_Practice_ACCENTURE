// palindrome check
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int left = 0;
    int right = str.length() - 1;
    while (left < right)
    {
        if (str[left] != str[right])
        {
            cout << "no" << endl;
            return 0;
        }
        left++;
        right--;
    }
    cout << "yes" << endl;
    return 0;
}
