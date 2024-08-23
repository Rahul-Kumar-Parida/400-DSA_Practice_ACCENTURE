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
    int food = r * unit;
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        count++;
        if (sum >= food)
        {
            break;
        }
        }

    cout << count << endl;
    return 0;
}