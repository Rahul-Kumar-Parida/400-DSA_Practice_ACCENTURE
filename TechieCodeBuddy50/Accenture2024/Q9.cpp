#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int i = 1;
    int same = 0;
    while (num > 0)
    {
        int digit = num % 10;
        int square = digit * digit;
        same = square * i + same;
        if (square > 9)
        {
            i *= 100;
        }
        else
        {
            i *= 10;
        }

        num /= 10;
    }

    cout << same << endl;
    return 0;
}