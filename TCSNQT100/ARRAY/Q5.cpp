// Count frequency of each element in an array
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
    unordered_map<int, int> newArray;
    for (int ch : arr)
    {
        newArray[ch]++;
    }
    for (const auto &ch : newArray)
    {
        cout << ch.first << ":" << ch.second << " ";
    }
    return 0;
}
