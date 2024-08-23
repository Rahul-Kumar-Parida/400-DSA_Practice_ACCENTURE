// Sorting elements of an array by frequency
#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(pair<int, int> &a, pair<int, int> &b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main()
{
    int n;
    cin >> n;
    if (n == 0)
    { // Change: Handle empty array case
        return 0;
    }
    vector<int> arr(n);
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }
    vector<pair<int, int>> vecFreq;
    for (const auto &ch : freq)
    {
        vecFreq.push_back(ch);
    }
    sort(vecFreq.begin(), vecFreq.end(), compare);
    for (const auto &ch : vecFreq)
    {
        for (int i = 0; i < ch.second; i++)
        {
            cout << ch.first << " ";
        }
    }

    return 0;
}
