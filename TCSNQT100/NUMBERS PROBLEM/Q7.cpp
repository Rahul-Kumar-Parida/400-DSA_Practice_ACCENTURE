// Even or Odd

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if ((n & 1) == 0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }

    return 0;
}