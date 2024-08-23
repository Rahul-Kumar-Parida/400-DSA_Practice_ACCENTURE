// Find Sum of AP Series
#include <iostream>
using namespace std;

int main()
{
    int a, d, n;
    cin >> a >> d >> n;

    int sumOfAp = n  * (2 * a + (n - 1) * d)/2;

    cout << sumOfAp << endl;

    return 0;
}
