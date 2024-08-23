// Check if Array is a subset of another array or not

#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cin >> m;
    int arr2[m];

    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    int count = 0;
    unordered_map<int, int> Map;
    for (int ch : arr1)
    {
        Map[ch]++;
    }
    for (int ch : arr2)
    {
        if (Map[ch] > 0)
        {
            Map[ch]--;
        }
        else
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}