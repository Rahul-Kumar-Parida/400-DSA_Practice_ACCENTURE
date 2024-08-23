#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> ans(n, -1);  // Initialize the answer array with -1
    stack<int> s;  // Stack to store the indices of the elements

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        // While stack is not empty and the current element is greater than
        // the element corresponding to the index stored on top of the stack
        while (!s.empty() && arr[i] > arr[s.top()]) {
            ans[s.top()] = arr[i];  // Update the answer for the index on top of the stack
            s.pop();  // Pop the index from the stack
        }
        s.push(i);  // Push the current index to the stack
    }

    for (int ch : ans) {
        cout << ch << " ";
    }

    return 0;
}
