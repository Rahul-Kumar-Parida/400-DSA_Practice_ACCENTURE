#include <iostream>
using namespace std;

int kthLargest(int arr[], int size, int k)
{
    for (int i = 0; i < size - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
    }

    int distinctCount = 0;
    int lastDistinct = -1;
    int result = -1;

    // Iterate from the end of the array to handle duplicates
    for (int i = size - 1; i >= 0; i--)
    {
        if (arr[i] != lastDistinct)
        {
            distinctCount++;
            lastDistinct = arr[i];
            if (distinctCount == k + 1)
            {
                result = arr[i];
                break;
                ;
            }
        }
    }

    if (distinctCount < k + 1)
    {
        return -1; // or some error value indicating k is out of range
    }
    // If there are less than k distinct elements
    return result; // or some error value indicating k is out of range
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;

    int result = kthLargest(arr, n, k);
    cout << result << endl;
    return 0;
}