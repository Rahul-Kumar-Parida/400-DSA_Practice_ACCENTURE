#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    int n = str.length();
    int oddSum = 0;
    int evenSum = 0;

    // Calculate the alternating sum
    for (int i = 0; i < n; i += 2) { // For digits in odd positions (0-based indexing)
        if (isdigit(str[i])) {
            int digit1 = str[i] - '0';
            oddSum += digit1;
        }
    }
    
    for (int i = 1; i < n; i += 2) { // For digits in even positions (0-based indexing)
        if (isdigit(str[i])) {
            int digit2 = str[i] - '0';
            evenSum += digit2;
        }
    }

    int mod11 = (oddSum - evenSum) % 11;
    if (mod11 < 0) {
        mod11 += 11; // To handle negative modulo
    }

    cout << mod11 << endl;

    return 0;
}
