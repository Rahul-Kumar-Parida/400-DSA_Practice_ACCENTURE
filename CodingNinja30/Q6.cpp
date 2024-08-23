#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int count = 0;
    int carry = 0;
    while (n1 > 0 || n2 > 0 ||carry>0)
    {
        int d1 = n1 % 10;
        int d2 = n2 % 10;

        int sum = d1+d2+carry;
        if (sum >= 10)
        {
            count++;
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        n1 /= 10;
        n2 /= 10;
    }

    cout << count << endl;
    return 0;
}