// merge two arrays and return array should be sorted
#include <iostream>
#include <algorithm>
using namespace std;

int *mergeArrays(int arr1[], int arr2[], int m, int n)
{
    int *newArray = new int[m + n];
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            newArray[k++] = arr1[i++];
        }
        else
        {
            newArray[k++] = arr2[j++];
        }
    }
    while (i < m)
    {
        newArray[k++] = arr1[i++];
    }
    while (j < n)
    {
        newArray[k++] = arr2[j++];
    }

    return newArray;
}
int main()
{
    int m, n;
    cin >> m;
    int arr1[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    cin >> n;
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    int *mergearray = mergeArrays(arr1, arr2, m, n);

    for (int i = 0; i < m + n; i++)
    {
        cout << mergearray[i] << endl;
    }

    delete[] mergearray;
    return 0;
}