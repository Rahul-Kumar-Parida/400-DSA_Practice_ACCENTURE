#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Method -1 (optimal solution using stack)

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     vector<int> newArray(n);
//     stack<int> s;
//     for (int i = n - 1; i >= 0; i--)
//     {
//         while (!s.empty() && s.top() <= arr[i])
//         {
//             s.pop();
//         }
//         if (s.empty())
//         {
//             newArray[i] = -1;
//         }
//         else
//         {
//             newArray[i] = s.top();
//         }
//         s.push(arr[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << newArray[i] << " ";
//     }

//     return 0;
// }

// Method -2..................................
 int main()
 {
     int n;
     cin >> n;
     int arr[n];
     for (int i = 0; i < n; i++)
     {
         cin >> arr[i];
     }
     vector<int> newArray;
     for (int i = 0; i < n - 1; i++)
     {
         int max = arr[i];
         bool check = true;
         for (int j = i + 1; j < n; j++)
         {
             if (arr[j] > max)
             {
                 newArray.push_back(arr[j]);
                 check = false;
                 break;
             }
         }
         if (check)
         {
             newArray.push_back(-1);
         }
     }
     newArray.push_back(-1);
     for (int ch : newArray)
     {
         cout << ch << " ";
     }
     return 0;
 }