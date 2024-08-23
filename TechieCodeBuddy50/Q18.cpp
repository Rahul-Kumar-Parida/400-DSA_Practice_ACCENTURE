#include <iostream>
#include <string>
using namespace std;
string reverse(string str)
{
    int l = 0;
    int r = str.length() - 1;
    while (l < r)
    {
        swap(str[l], str[r]);
        l++;
        r--;
    }
    return str;
}
int main()
{
    string str;
    cin >> str;
    string news=reverse(str);
    if (str == news)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}