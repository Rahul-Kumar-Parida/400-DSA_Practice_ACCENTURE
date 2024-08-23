#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index = 0;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }

    cout << max << "\n"
         << index << endl;

    delete[] arr;
    return 0;
}