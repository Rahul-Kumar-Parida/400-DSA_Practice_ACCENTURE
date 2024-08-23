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
    int maxifreq = 0;
    unordered_map<int, int> Map;
    for (int i = 0; i < n; i++)
    {
        Map[arr[i]]++;
        if (Map[arr[i]] > maxifreq)
        {
            maxifreq = Map[arr[i]];
        }
    }
    for (auto s : Map)
    {
        if (maxifreq == s.second)
        {
            cout << s.first << endl;
            return 0;
        }
    }
    return 0;
}