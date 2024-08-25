// Rearrange array in increasing-decreasing order
#include <iostream>
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
    sort(arr, arr + n);
    int left = n/2;
    int right = n - 1;
    while (left < right)
    {
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    for (int ch : arr)
    {
        cout << ch << " ";
    }

    return 0;
}
