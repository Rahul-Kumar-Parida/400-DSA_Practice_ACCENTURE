// stair problem
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a = n / m;
    if (n % m != 0)
    {
        a += 1; // Additional step needed to cover the remainder
    }
    cout << a << endl;
    return 0;
}