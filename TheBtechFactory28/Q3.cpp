// Given an integer array nums, find the subarray with the largest sum, and return its sum.
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > max)
        {
            max = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }

    cout << max << endl;
    return 0;
}