#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> newarr(n, 0); // Initialize with zero or any default value

    // Read input array
    for (int k = 0; k < n; k++) {
        cin >> arr[k];
    }

    int posIndex = 0; // Start index for positive numbers
    int negIndex = 1; // Start index for negative numbers

    // Place positive numbers at even indices
    for (int k = 0; k < n; k++) {
        if (arr[k] > 0) {
            if (posIndex < n) {
                newarr[posIndex] = arr[k];
                posIndex += 2; // Move to the next position for positive numbers
            }
        }
    }
    
    // Place negative numbers at odd indices
    for (int k = 0; k < n; k++) {
        if (arr[k] < 0) {
            if (negIndex < n) {
                newarr[negIndex] = arr[k];
                negIndex += 2; // Move to the next position for negative numbers
            }
        }
    }
    
    // Print the rearranged array
    for (int i = 0; i < n; i++) {
        cout << newarr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
