#include <iostream>
#include <climits>
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
    int first = INT_MIN;
    int second = INT_MIN;
    if (n  < 2)
    {
        cout << -1 << endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }
    if(second==INT_MIN){
        cout<<-1<<endl;
    }else{
        cout << second << endl;
    }
    

    return 0;
}