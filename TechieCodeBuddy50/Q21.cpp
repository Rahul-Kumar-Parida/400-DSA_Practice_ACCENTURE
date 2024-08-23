//  Calculate and return the difference between the sum of square roots of even numbers and the sum of square roots of odd numbers in the range from ‘m’ to ‘n’ (inclusive)
#include <iostream>
#include <cmath>
#include <cstdio> 
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    double evenSum = 0, oddSum = 0;
    for (int i = m; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            evenSum += sqrt(i);
        }
        else
        {
            oddSum += sqrt(i);
        }
    }
    printf("%.2f\n", abs(evenSum - oddSum));
    return 0;
}