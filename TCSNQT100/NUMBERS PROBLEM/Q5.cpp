// Check if a number is armstrong number of not
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int original = n;
    int temp = n;

    int numDigits = 0;
    while (temp > 0)
    {
        numDigits++;
        temp /= 10;
    }

    while (n > 0)
    {
        int i = n % 10;
        double cube = pow(i, numDigits);
        sum += cube;
        n = n / 10;
    }

    if (sum == original)
    {
        cout << true << endl;
    }
    else
    {
        cout << false << endl;
    }

    return 0;
}