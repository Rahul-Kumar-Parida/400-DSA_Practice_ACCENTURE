#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

// Function to check if a number can be expressed as the sum of two primes
bool canBeExpressedAsSumOfTwoPrimes(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (isPrime(i) && isPrime(n - i)) {
            return true;
        }
    }
    return false;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (canBeExpressedAsSumOfTwoPrimes(number)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
