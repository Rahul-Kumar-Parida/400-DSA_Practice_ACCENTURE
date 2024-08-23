#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string maxNumberFromDigits(const vector<int> &arr)
{
    // Convert all numbers in the array to strings and concatenate them
    string all_digits;
    for (int num : arr)
    {
        all_digits += to_string(num);
    }

    // Sort the digits in descending order
    sort(all_digits.begin(), all_digits.end(), greater<char>());

    return all_digits;
}

int main()
{
    vector<int> arr = {34, 79, 58, 64};
    cout << maxNumberFromDigits(arr) << endl; // Output: 98765443
    return 0;
}
