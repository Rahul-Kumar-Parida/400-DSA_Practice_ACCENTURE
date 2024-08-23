// Rat count problem
#include <iostream>
using namespace std;
int main()
{
    int r, unit, n;
    cin >> r >> unit >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    int count = 0;
    int totalfood = r * unit;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        count++;
        if (sum > totalfood)
        {
            break;
        }
    }
    cout << count << endl;
    return 0;
}