// Find all non-repeating elements in an array
#include <iostream>
#include <unordered_map>
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
    unordered_map<int, int> newArr;
    for (int ch : arr)
    {
        newArr[ch]++;
    }

    for (const auto &ch : newArr)
    {
        if (ch.second == 1)
        {
            cout << ch.first << " ";
        }
    }
    return 0;
}
