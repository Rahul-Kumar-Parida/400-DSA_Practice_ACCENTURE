// number of occurrences of each element in the array.
#include <iostream>
#include <map>
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
    map<int, int> freq;
    for (int ch : arr)
    {
        freq[ch]++;
    }
    for (auto ch : freq)
    {
        cout << ch.first << " : " << ch.second << " ";
    }
    return 0;
}