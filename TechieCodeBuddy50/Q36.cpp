#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, totalsum;
    cin >> n >> totalsum;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n < 2)
    {
        cout << -1 << endl;
        return 0;
    }
    int first = INT_MAX;
    int second = INT_MAX;

    for (int i = 0; i < n; i++)
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
    if (first + second <= totalsum)
    {
        cout << first * second;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}