#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int carry = 0;
    int count = 0;
    while (num1 > 0 || num2 > 0)
    {
        int d1 = num1 % 10;
        int d2 = num2 % 10;
        if (d1 + d2 + carry > 9)
        {
            count++;
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        num1 /= 10;
        num2 /= 10;
    }

    cout << count << endl;
    return 0;
}