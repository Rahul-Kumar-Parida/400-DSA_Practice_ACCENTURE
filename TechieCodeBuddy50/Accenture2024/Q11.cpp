#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= 1; j--)
        {
            for (int k = 0; k < i; k++)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}