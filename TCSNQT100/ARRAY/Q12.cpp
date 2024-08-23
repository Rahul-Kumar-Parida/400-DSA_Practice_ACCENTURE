// Remove duplicates from unsorted array
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_set<int> NewArr;
    for (int ch : arr)
    {
        if (NewArr.find(ch) == NewArr.end())
        {
            res.push_back(ch);
            NewArr.insert(ch);
        }
    }

    for (int ch : res)
    {
        cout << ch << " ";
    }
    return 0;
}
