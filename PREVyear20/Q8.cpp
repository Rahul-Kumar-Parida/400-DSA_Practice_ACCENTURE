//
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, num;
    cin >> n >> num;
    string rev = "";
    while (num > 0)
    {
        int rem = num % n;
        if (rem >= 0 && rem <= 9)
        {
            string ch2 = to_string(rem);
            rev = ch2 + rev;
        }
        else
        {
            char ch = 55 + rem;
            rev = ch + rev;
        }

        num = num / n;
    }
    cout << rev;
    return 0;
}