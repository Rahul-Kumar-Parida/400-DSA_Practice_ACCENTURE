// the difference between the sum of square roots of even numbers and the sum of square roots of odd numbers in the range from m to n (inclusive).
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if (n > m)
    {
        swap(n, m);
    }
    double evensum = 0;
    double oddsum = 0;
    for (int i = n; i <= m; i++)
    {
        if (i % 2 == 0)
        {
            evensum += sqrt(i);
        }
        else
        {
            oddsum += sqrt(i);
        }
    }
    double ans = evensum - oddsum;
    printf("%.2f", ans);

    return 0;
}