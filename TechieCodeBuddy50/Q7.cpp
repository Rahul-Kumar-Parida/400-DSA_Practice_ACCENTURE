#include <iostream>
#include <unordered_map>
using namespace std;

int findMaxLength(int arr[], int n) {
    unordered_map<int, int> prefixSumMap;
    int maxLen = 0;
    int prefixSum = 0;

    for (int i = 0; i < n; i++) {
        prefixSum += (arr[i] == 0) ? -1 : 1;

        if (prefixSum == 0) {
            maxLen = i + 1;
        }

        if (prefixSumMap.find(prefixSum) != prefixSumMap.end()) {
            maxLen = max(maxLen, i - prefixSumMap[prefixSum]);
        } else {
            prefixSumMap[prefixSum] = i;
        }
    }

    return maxLen;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxLength = findMaxLength(arr, n);
    cout << maxLength << endl;

    return 0;
}
