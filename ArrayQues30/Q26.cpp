#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        double value = sqrt(arr[i]);
        if (value == float(value))
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}