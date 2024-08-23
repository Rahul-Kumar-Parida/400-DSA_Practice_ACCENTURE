#include <iostream>
using namespace std;

// Function to convert a decimal number to binary and return as an integer
int decimalTObinary(int n)
{
    int binary = 0;
    int place = 1; // To keep track of the place value in binary (1s, 10s, 100s, etc.)

    while (n > 0)
    {
        int rem = n % 2;
        binary += rem * place;
        place *= 10;
        n /= 2;
    }

    return binary;
}

int main()
{
    int n;
    cin >> n;

    int decimal = 0;
    int base = 1; // Base for octal to decimal conversion (8^0)

    // Convert octal to decimal
    while (n > 0)
    {
        int digit = n % 10;
        decimal += digit * base;
        base *= 8;
        n /= 10;
    }

    // Convert decimal to binary
    int binary = decimalTObinary(decimal);
    cout << binary << endl;
    return 0;
}
