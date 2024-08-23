// Find the median of the given array
#include <iostream>
#include <algorithm>
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
    sort(arr, arr + n);
    float median = 0;
    if (n % 2 == 0)
    {
        median = (arr[(n / 2) - 1] + arr[n / 2]) / 2.0;
    }
    else
    {
        median = arr[n / 2];
    }
    cout << median << endl;
    return 0;
}
