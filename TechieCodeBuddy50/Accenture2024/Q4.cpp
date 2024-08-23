#include <iostream>
#include <utility>
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
    pair<int, int> sum;
    int evensum = 0;
    int oddsum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evensum += arr[i];
        }
        else
        {
            oddsum += arr[i];
        }
    }
    sum.first = evensum;
    sum.second = oddsum;
    cout << sum.first << " " << sum.second << endl;
    return 0;
}