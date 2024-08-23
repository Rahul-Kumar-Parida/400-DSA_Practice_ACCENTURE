// Check if a number is Harshad number

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp = n;
    int sum = 0;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += digit;
        temp /= 10;
    }
    if (n % sum == 0)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}