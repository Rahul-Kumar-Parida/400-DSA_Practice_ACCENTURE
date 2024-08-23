#include <iostream>
#include <set>
using namespace std;
int main()
{
    string s;
    cin >> s;
    set<char> ch;
    int arr[10] = {0};

    for (char ch : s)
    {
        int digit = ch - '0';
        arr[digit]++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        int d1 = s[i] - '0';
        if (arr[i] != d1)
        {
            cout << 0 << endl;
            return 0;
        }
    }
    for (char it : s)
    {
        ch.insert(it);
    }
    cout << ch.size() << endl;
    return 0;
}