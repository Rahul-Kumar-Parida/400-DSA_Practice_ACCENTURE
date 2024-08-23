// Merge two Sorted Array
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    vector<int> merged(n + m);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            merged[k++] = arr1[i++];
        }
        else
        {
            merged[k++] = arr2[j++];
        }
    }
    while (i < n)
    {
        merged[k++] = arr1[i++];
    }
    while (j < m)
    {
        merged[k++] = arr2[j++];
    }

    for (int ch : merged)
    {
        cout << ch << " ";
    }
    return 0;
}