// Check if Two String Arrays are Equivalent
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> arr1(n);
    vector<string> arr2(m);
    string ans1 = "";
    string ans2 = "";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        ans1 += arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
        ans2 += arr2[i];
    }
    if (ans1 == ans2)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}