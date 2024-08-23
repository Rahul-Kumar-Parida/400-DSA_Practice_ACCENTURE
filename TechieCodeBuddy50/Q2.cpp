#include <iostream>
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
    vector<int> newArr(n);
    int i = 0;
    for (int k = 0; k < n; k++)
    {
        if (arr[k] != 0)
        {
            newArr[i++] = arr[k];
        }
    }
    while (i < n)
    {
        newArr[i++] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << newArr[i] << " ";
    }
    return 0;
}