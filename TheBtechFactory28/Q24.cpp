// Write a Program to Find if a Given Year is a Leap Year.

#include <iostream>
using namespace std;
int main()
{
    int year;
    cin >> year;
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        cout << "leap year" << endl;
    }
    else
    {
        cout << "no leap year" << endl;
    }

    return 0;
}