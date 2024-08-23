// Sort an array according to the order defined by another array
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int o, s;
    cin >> o;
    vector<int> newArr;
    int arr[o];
    for (int i = 0; i < o; i++)
    {
        cin >> arr[i];
    }
    cin >> s;
    int arr2[s];
    for (int i = 0; i < s; i++)
    {
        cin >> arr2[i];
    }

    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < s; j++)
        {
            if (arr[i] == arr2[j])
            {
                newArr.push_back(arr2[j]);
            }
        }
    }

    for (int ch : newArr)
    {
        cout << ch << " ";
    }
    return 0;
}

// 2nd approach..................................................
//  #include <iostream>
//  #include <vector>
//  #include <unordered_map>
//  #include <algorithm>
//  using namespace std;

// int main() {
//     int o, s;
//     cin >> o;
//     vector<int> order(o);
//     unordered_map<int, int> orderMap;

//     // Read the order array and populate the map
//     for (int i = 0; i < o; i++) {
//         cin >> order[i];
//         orderMap[order[i]] = i;
//     }

//     cin >> s;
//     vector<int> arr(s);

//     // Read the array to sort
//     for (int i = 0; i < s; i++) {
//         cin >> arr[i];
//     }

//     // Sort the array using the map
//     sort(arr.begin(), arr.end(), [&](int a, int b) {
//         return orderMap[a] < orderMap[b];
//     });

//     // Print the sorted array
//     for (int ch : arr) {
//         cout << ch << " ";
//     }
//     cout << endl;

//     return 0;
// }
