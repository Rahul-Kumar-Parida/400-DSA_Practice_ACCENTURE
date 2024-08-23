#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int sum = 0;
    for (int i = 1; i <= sqrt(N); i++)
    {
        if (N % i == 0)
        {
            sum += i;
            if (i != N / i)
            {
                sum += N / i;
            }
        }
    }

    cout << sum << endl;

    return 0;
}