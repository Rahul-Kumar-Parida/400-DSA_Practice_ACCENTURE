#include <iostream>
using namespace std;
int main()
{
    int n, num, diff;
    cin >> n >> num >> diff;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int dif = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        dif = num - arr[i];
        if (abs(dif) <= diff)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}