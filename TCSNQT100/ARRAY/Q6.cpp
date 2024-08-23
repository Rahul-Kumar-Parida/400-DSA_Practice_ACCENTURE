// Rearrange array in increasing-decreasing order
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    vector<int> result(n);
    sort(arr, arr + n);
    int left = 0;
    int right = n - 1;
    int i = 0;
    while (left <= right)
    {
        if (i % 2 == 0)
        {
            result[i++] = arr[left];
            left++;
        }
        else
        {
            result[i++] = arr[right];
            right--;
        }
    }
    for (int ch : result)
    {
        cout << ch << " ";
    }

    return 0;
}
