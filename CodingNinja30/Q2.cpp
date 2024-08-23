#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargest(vector<int> arr)
{
    int n = arr.size();
    int first = INT_MIN;
    int second = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }

    return second;
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
    vector<int> evenArr;
    vector<int> oddArray;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            evenArr.push_back(arr[i]);
        }
        else
        {
            oddArray.push_back(arr[i]);
        }
    }
    int evenNum = secondLargest(evenArr);
    int oddNum = secondLargest(oddArray);

    cout << evenNum + oddNum << endl;

    return 0;
}