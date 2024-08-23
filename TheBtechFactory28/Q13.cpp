// Count the Occurrences of a Given Element in an Array.
#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int n, element;
    cin >> n >> element;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_map<int, int> freq;
    for (int ch : arr)
    {
        freq[ch]++;
    }
    auto it = freq.find(element);
    if (it != freq.end())
    {
        cout << it->second << endl;
    }
    else
    {
        cout << "0" << endl;
    }
    return 0;
}