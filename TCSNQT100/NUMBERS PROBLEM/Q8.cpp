// Check weather a given number is positive or negative
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n > 0)
    {
        cout << "pos" << endl;
    }
    else if (n < 0)
    {
        cout << "neg" << endl;
    }
    else
    {
        cout << "zero" << endl;
    }

    return 0;
}
