#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + (n * i);
        cout << n * i << " ";
    }
    cout << endl;
    cout << sum << endl;
    return 0;
}