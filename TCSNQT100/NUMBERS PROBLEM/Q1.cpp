// Check if a number is palindrome or not
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int original = n;
    int rev = 0;
    if (n < 0 || (n % 10 == 0 && n != 0))
    {
        cout<<false<<endl;
        return 0;
    }
    while (n > 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    if (original == rev)
    {
        cout << true << endl;
    }
    else
    {
        cout << false << endl;
    }

    return 0;
}
