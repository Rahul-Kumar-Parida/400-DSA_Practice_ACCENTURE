#include <iostream>
#include <algorithm>  // For std::reverse
using namespace std;

void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotateArray(int arr[], int n, int d) {
    d = d % n;  // Handle cases where d >= n
    reverseArray(arr, 0, n - 1); 
    reverseArray(arr, 0, d - 1);        
    reverseArray(arr, d, n - 1);         
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int d = 3;

    rotateArray(arr, n, d);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}