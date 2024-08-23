// Adding Element in an array
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    arr1.push_back(k);
    for (int ch : arr1)
    {
        cout << ch << " ";
    }
    return 0;
}
