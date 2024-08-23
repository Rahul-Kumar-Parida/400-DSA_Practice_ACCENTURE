// Find all Palindrome numbers in a given range
#include <iostream>
using namespace std;

bool ispalendrome(int n)
{
    if (n < 0 || (n % 10 == 0 && n != 0))
    {
        return 0;
    }

    int rev = 0;
    int original = n;
    while (n > 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    return original == rev;
}

int main()
{
    int start, end;
    cin >> start >> end;
    if (start > end) {
        cout << "Invalid range" << endl;
        return 0;
    }
    for (int i = start; i <= end; i++)
    {
        if (ispalendrome(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}
