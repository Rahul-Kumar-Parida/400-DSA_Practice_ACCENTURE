// Concatenate one string to another
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    string res = "";
    res = str1 + str2;

    cout << res << endl;
    return 0;
}
