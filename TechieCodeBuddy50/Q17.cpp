// Find the missing number in an array.
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
    int totalSum = n * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    cout << totalSum - sum << endl;
    delete[] arr;
    return 0;
}