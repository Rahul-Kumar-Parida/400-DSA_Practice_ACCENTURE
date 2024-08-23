#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        int x = i;
        while (x > 0)
        {
            if (x & 1)
            {
                sum += 2;
            }
            else
            {
                sum += 1;
            }
            x >>= 1;  // Corrected line
        }
        if (sum % 2 != 0)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
