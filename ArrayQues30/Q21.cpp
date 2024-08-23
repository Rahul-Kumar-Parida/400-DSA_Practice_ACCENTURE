#include <iostream>
using namespace std;

int main()
{
    int day;
    cin >> day;
    if (day < 1)
    {
        cout << -1 << endl;
    }
    int coins = day * day;

    cout << coins << endl;

    return 0;
}