//LARGEST AND SMALLEST SUM
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargest(vector<int> arr)
{
    int first = INT_MIN;
    int second = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
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
int secondSmallest(vector<int> arr)
{
    int first = INT_MAX;
    int second = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] < second && arr[i] != first)
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
    vector<int> even;
    vector<int> odd;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i % 2 == 0)
        {
            even.push_back(arr[i]);
        }
        else
        {
            odd.push_back(arr[i]);
        }
    }

    int SLeven = secondLargest(even);
    int SSodd = secondSmallest(odd);
    cout << SLeven + SSodd << endl;
    return 0;
}