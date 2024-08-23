#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr;
    arr.push_back(1);
    for (int i = 2; i <n; i++)
    {
        arr.push_back(arr.back() ^ i);
    }

    int sum = 0;
    for (int ch : arr)
    {
        sum += ch;
    }
    cout << sum << endl;

    return 0;
}