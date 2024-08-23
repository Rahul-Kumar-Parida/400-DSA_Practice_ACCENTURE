// Sum of the numbers in a String
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int newSum = 0;
    int sum = 0;
    for (char ch : str)
    {
        if (ch >= '0' && ch <= '9')
        {
            int digit = ch - '0';
            sum = sum * 10 + digit;
        }
        else
        {
            newSum += sum;
            sum = 0;
        }
    }
    newSum += sum;

    cout << newSum  << endl;
    return 0;
}
