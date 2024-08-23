// Remove duplicates from a sorted array
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> arr2;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    arr2.push_back(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            arr2.push_back(arr[i]);
        }
    }

    for (int ch : arr2)
    {
        cout << ch << " ";
    }
    return 0;
}
