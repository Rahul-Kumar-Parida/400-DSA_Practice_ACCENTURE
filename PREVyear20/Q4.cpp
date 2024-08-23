#include <iostream>
using namespace std;
int main()
{
    int n, num, diff;
    cin >> n >> num >> diff;
    int arr[n];
    if (n <= 0)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int totaldiff = num - arr[i];
        if (abs(totaldiff) <= diff)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}