// Convert digits/numbers to words
#include <iostream>
#include <string>
using namespace std;

string numtoWord(int n)
{
    switch (n)
    {
    case 1:
        return "One";
    case 2:
        return "Two";
    case 3:
        return "Three";
    case 4:
        return "Four";
    case 5:
        return "Five";
    case 6:
        return "Six";
    case 7:
        return "Seven";
    case 8:
        return "Eight";
    case 9:
        return "Nine";
    case 0:
        return "Zero";
    default:
        return "";
    }
}

int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << "Zero" << endl;
        return 0;
    }
    string word = "";
    while (n > 0)
    {
        int digit = n % 10;
        word = numtoWord(digit) + " " + word;
        n /= 10;
    }

    cout << word << endl;
    return 0;
}
