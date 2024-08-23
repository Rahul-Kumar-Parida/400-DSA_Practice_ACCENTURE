#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, ref;
    cin >> n >> ref;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());
    int res = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int digit = arr[i] + res;
        if (digit < ref)
        {
            count++;
            res = 0;
        }
        else
        {
            res = digit - 100;
        }
    }

    cout << count << endl;
    return 0;
}