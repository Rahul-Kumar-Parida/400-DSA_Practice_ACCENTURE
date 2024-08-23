#include <iostream>
#include <limits.h>
using namespace std;

pair<int,int> maxElement(int arr[], int size)
{
    int max = INT_MIN;
    int maxIndex = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }
    return make_pair(max, maxIndex);
}

int main()
{
    int arr[] = {1222, 2, 3, 4, 13995, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    pair<int,int> result = maxElement(arr, size);
    cout << "max element and Indrx  is " << result.first<<" " << result.second << endl;
    return 0;
}