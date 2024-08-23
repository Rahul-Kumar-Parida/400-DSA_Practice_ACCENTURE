// Eqilibrium point
#include <iostream>
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

    int totalSum = 0, leftSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        totalSum -= arr[i]; // Now totalSum is the sum of elements to the right of index i

        if (leftSum == totalSum)
        {
            cout << i << endl;
            return 0;
        }

        leftSum += arr[i];
    }

    cout << "-1" << endl; // No equilibrium index found
    return 0;
}
