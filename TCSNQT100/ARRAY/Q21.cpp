// Finding equilibrium index of an array
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int totalsum = 0;
    int leftsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        totalsum -= arr[i];
        if (leftsum == totalsum)
        {
            cout << i << endl;
            return 0;
        }

        leftsum += arr[i];
    }

    cout << -1 << endl;
    return 0;
}
