//  Count the occurrences of a given element in an array.
// int [] arr ={5,2,4,1,2}
// int element = 2; output=2

#include <iostream>
#include <unordered_map>
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
    int ele;
    cin >> ele;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}