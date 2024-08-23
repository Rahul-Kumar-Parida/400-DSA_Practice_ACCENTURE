// Finding Circular rotation of an array by K positions
#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp[n];
    cin >> k;
    k = k % n;
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
    return 0;
}
