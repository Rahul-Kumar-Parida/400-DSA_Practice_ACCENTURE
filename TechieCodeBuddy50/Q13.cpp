#include <iostream>
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
    int target;
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << i << endl;
            delete[] arr;
            return 0;
        }
    }
    cout << -1 << endl;
    delete[] arr;
    return 0;
}