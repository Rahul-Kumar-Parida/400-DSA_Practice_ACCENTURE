// Second Smallest and Second Largest element in an array
#include <iostream>
#include <climits>
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
    if (n < 2)
    {
        cout << -1 << endl;
        return 0;
    }
    int firstL = INT_MIN;
    int secondL = INT_MIN;
    int firstS = INT_MAX;
    int secondS = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > firstL)
        {
            secondL = firstL;
            firstL = arr[i];
        }
        else if (arr[i] > secondL && arr[i] != firstL)
        {
            secondL = arr[i];
        }
        if (arr[i] < firstS)
        {
            secondS = firstS;
            firstS = arr[i];
        }
        else if (arr[i] < secondS && arr[i] != firstS)
        {
            secondS = arr[i];
        }
    }

    if (secondL == INT_MIN || secondS == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << secondS << " " << secondL << endl;
    }

    return 0;
}
