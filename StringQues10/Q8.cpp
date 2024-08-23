#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str1;
    getline(cin, str1);
    string str2;
    getline(cin, str2);

    int res = str1.find(str2);

    if (res != string::npos)
    { // Check if str2 is found in str1
        cout << res << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}