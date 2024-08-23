#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x;
    cin >> x;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int start = 0;
    int end = n - 1;
    bool found = false;

    while (start < end) {
        int sum = arr[start] + arr[end];
        if (sum == x) {
            cout <<arr[start] << " " << arr[end] << endl;
            found = true;
            break;
        } else if (sum < x) {
            start++;
        } else {
            end--;
        }
    }

    if (!found) {
        cout << "No pair found." << endl;
    }

    return 0;
}
