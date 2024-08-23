// Replace all 0s with 1s in a given integer

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int rev = 0;
    int place = 1;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit == 0)
        {
            rev = rev + 1 * place;
        }
        else
        {
            rev = rev + (place * digit);
        }
        n /= 10;
        place *= 10;
    }

    cout << rev << endl;

    return 0;
}
