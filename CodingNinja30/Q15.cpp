// number is an autobiographical number.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.length();
    if (n > 10)
    {
        cout << 0 << endl;
        return 0;
    }
    vector<int> counts(10, 0);
    for (char ch : str)
    {
        if (ch < '0' || ch > '9')
        {
            cout << 0 << endl;
            return 0;
        }
        counts[ch - '0']++;
    }
    bool check = true;
    for (int i = 0; i < n; i++)
    {
        
        if (str[i] - '0' != counts[i])
        {
            check = false;
            break;
        }
    }
    if (check)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}