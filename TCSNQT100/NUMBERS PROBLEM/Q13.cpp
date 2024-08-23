// Greatest of three numbers

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    int greatest = n1;
    if (n2 > greatest)
    {
        greatest = n2;
    }
    if (n3 > greatest)
    {
        greatest = n3;
    }

    cout << greatest;

    return 0;
}
