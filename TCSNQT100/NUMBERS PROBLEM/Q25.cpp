// LCM of two numbers
#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    int gcdvalue = gcd(n1, n2);
    int lcm = abs(n1 * n2) / gcdvalue;

    cout << lcm << endl;

    return 0;
}
