// Best time to sell stock
#include <iostream>
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
    int profit = 0;
    int minBuy = arr[0];
    for (int i = 1; i < n; i++)
    {
        int diff = arr[i] - minBuy;
        profit = max(profit, diff);
        minBuy = min(minBuy, arr[i]);
    }

    cout << profit << endl;
    return 0;
}