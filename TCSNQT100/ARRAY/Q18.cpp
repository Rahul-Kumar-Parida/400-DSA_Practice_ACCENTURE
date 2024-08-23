// Replace each element of the array by its rank in the array
#include <iostream>
#include <algorithm>
#include <vector>
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
    vector<int> newArr;
    vector<int> rtArr;
    for (int ch : arr)
    {
        newArr.push_back(ch);
    }
    sort(newArr.begin(), newArr.end());
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < n; j++)
        {
            if (arr[i] == newArr[j])
            {
                rtArr.push_back(j + 1);
                break;
            }
        }
    }

    for (int ch : rtArr)
    {
        cout << ch << " ";
    }

    return 0;
}
