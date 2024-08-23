// Check if a number is a strong number or not  (sum of factorial of each element of number is equal to that number)
#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;

    int temp = n;
    int sum = 0;
    while (n > 0)
    {
        int digit = n%10;
        sum += factorial(digit);
        n /= 10;
    }

    if (temp == sum)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}