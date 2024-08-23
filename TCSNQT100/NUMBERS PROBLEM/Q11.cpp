// Program to find sum of GP Series
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, r, n;
    cin >> a >> r >> n;
    int sumOfGp = 0;
    if (r == 1)
    {
        sumOfGp = a * n;
    }
    else
    {
        sumOfGp = a * (pow(r, n) - 1) / (r - 1);
    }

    cout << sumOfGp << endl;

    return 0;
}
