// GCD of two numbers

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    while (n2 != 0)
    {
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    cout << n1 << endl;
    return 0;
}
