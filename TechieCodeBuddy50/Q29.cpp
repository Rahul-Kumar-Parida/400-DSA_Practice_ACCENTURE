//  Rearrange array element by sign
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> pos;
    vector<int> neg;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            pos.push_back(arr[i]);
        }
        else
        {
            neg.push_back(arr[i]);
        }
    }
    int i = 0, j = 0, k = 0;
    while (i < pos.size() && j < neg.size())
    {
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }
    while (i < pos.size())
    {
        arr[k++] = pos[i++];
    }
    while (j < neg.size())
    {
        arr[k++] = neg[j++];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}