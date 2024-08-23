#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num = 0;
    int i = 1;
    while (n > 0)
    {
        int digit = n % 2;
        num = digit * i + num;
        i *= 10;
        n /= 2;
    }
    cout << num << endl;
    return 0;
}