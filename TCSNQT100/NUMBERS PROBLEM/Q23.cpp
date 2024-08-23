// Check if a Number is Automorphic

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    long long square = (long long)n * n;
    int temp = n;
    int divisor = 1;

    while (temp > 0)
    {
        divisor *= 10;
        temp /= 10;
    }
    if (square % divisor == n)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}
