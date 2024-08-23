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
    if (n == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    int count = 1;
    int maxele=arr[n-1];
    for (int i = n-2; i >=0; i--)
    {
        if(arr[i]>maxele){
            count++;
            maxele=arr[i];
        }
    }

    cout << count  << endl;
    return 0;
}