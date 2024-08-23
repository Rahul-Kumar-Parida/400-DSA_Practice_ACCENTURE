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
    unordered_map<int, int> Map;
    for (int ch : arr)
    {
        Map[ch]++;
    }
    for (const auto &ch : Map)
    {
        cout << ch.first << ":" << ch.second << " ";
    }
    return 0;
}