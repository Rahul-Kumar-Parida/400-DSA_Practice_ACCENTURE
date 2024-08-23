#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxi = INT_MIN;
    int astart = -1;
    int aend = -1;
    int start = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
        {
            start = i;
        }
        sum += arr[i];
        if (sum > maxi)
        {
            maxi = sum;
            astart = start;
            aend = i;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }

    cout << maxi << endl;
    for (int i = astart; i <= aend; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}