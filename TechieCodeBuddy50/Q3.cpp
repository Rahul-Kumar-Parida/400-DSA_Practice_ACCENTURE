#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int start = -1;
    int end = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxi = INT_MIN;
    int sum = 0;
    int st = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
        {
            st = i;
        }
        sum += arr[i];
        if (sum > maxi)
        {
            maxi = sum;
            start = st;
            end = i;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }

    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl<< maxi << endl;
    return 0;
}