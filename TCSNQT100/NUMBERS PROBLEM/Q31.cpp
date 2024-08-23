#include <iostream>
using namespace std;

// Function to find the Greatest Common Divisor (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

// Function to add two fractions and return the result as a simplified fraction
void addFractions(int num1, int den1, int num2, int den2, int &numResult, int &denResult) {
    // Find the Least Common Denominator (LCD)
    int lcd = den1 * den2 / gcd(den1, den2);
    
    // Convert the fractions to have the common denominator
    num1 = num1 * (lcd / den1);
    num2 = num2 * (lcd / den2);
    
    // Add the numerators
    numResult = num1 + num2;
    denResult = lcd;
    
    // Simplify the result by dividing both numerator and denominator by their GCD
    int commonDivisor = gcd(numResult, denResult);
    numResult /= commonDivisor;
    denResult /= commonDivisor;
}

int main() {
    int num1, den1, num2, den2;
    cout << "Enter numerator and denominator of first fraction: ";
    cin >> num1 >> den1;
    cout << "Enter numerator and denominator of second fraction: ";
    cin >> num2 >> den2;
    
    int numResult, denResult;
    addFractions(num1, den1, num2, den2, numResult, denResult);
    
    cout << "The sum of the fractions is: " << numResult << "/" << denResult << endl;
    return 0;
}
