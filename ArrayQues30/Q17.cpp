#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargest(const vector<int> &arr)
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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> oddindex;
    vector<int> evenindex;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            evenindex.push_back(arr[i]);
        }
        else
        {
            oddindex.push_back(arr[i]);
        }
    }

    int secondLardeodd = secondLargest(oddindex);
    int secondLardeeven = secondLargest(evenindex);

    cout << secondLardeeven + secondLardeodd << endl;

    return 0;
}