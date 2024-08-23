#include <iostream>
#include <vector>
using namespace std;

vector<int> mergedTwoArray(vector<int> arr1, int size1, vector<int> arr2, int size2)
{
    int i = 0, j = 0;
    vector<int> merged;
    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            merged.push_back(arr1[i]);
            i++;
        }
        else
        {
            merged.push_back(arr2[j]);
            j++;
        }
    }
    while (i < size1)
    {
        merged.push_back(arr1[i]);
        i++;
    }
    while (j < size2)
    {
        merged.push_back(arr2[j]);
        j++;
    }
    return merged;
}

int main()
{
    vector<int> arr1 = {1, 3, 5};
    vector<int> arr2 = {2, 4, 6};
    int size1 = arr1.size();
    int size2 = arr2.size();
    vector<int> result = mergedTwoArray(arr1, size1, arr2, size2);
    for (int res : result)
    {
        cout << res << " ";
    }

    return 0;
}