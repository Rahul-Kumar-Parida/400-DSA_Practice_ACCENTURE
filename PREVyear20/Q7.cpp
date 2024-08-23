#include <iostream>
#include <climits>
#include <vector>
using namespace std;

pair<int, int> secondSmallest(vector<int> arr)
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
    return {first, second};
}
int main()
{
    int n, sum;
    cin >> n >> sum;
    vector<int> arr(n);
    if (n <= 2)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    pair<int, int> ch = secondSmallest(arr);
    if (ch.first + ch.second <= sum)
    {
        cout << ch.first * ch.second << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}