#include <iostream>
#include <vector>
using namespace std;
void Selectionsort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        if (mini != i)
        {
            swap(arr[i], arr[mini]);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> even;
    vector<int> odd;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            even.push_back(arr[i]);
        }
        else
        {
            odd.push_back(arr[i]);
        }
    }
    Selectionsort(even);
    Selectionsort(odd);
    for (int it : even)
    {
        cout << it << " ";
    }
    cout << endl;
    for (int it : odd)
    {
        cout << it << " ";
    }

    return 0;
}