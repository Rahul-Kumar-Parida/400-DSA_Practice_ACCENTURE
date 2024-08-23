// Leap Year or not

#include <iostream>
using namespace std;

int main()
{
    int yr;
    cin >> yr;

    if (yr % 400 == 0)
    {
        cout << "Leap Year" << endl;
    }
    else if (yr % 4 == 0 && yr % 100 != 0)
    {
        cout << "Leap Year" << endl;
    }
    else
    {
        cout << "Not a Leap Year" << endl;
    }

    return 0;
}