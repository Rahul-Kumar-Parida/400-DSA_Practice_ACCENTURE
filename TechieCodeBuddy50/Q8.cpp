// magical number
#include <iostream>
#include <string>
using namespace std;
bool isMagical(int num)
{
    string binary = "";
    while (num > 0)
    {
        binary = to_string(num % 2) + binary;
        num /= 2;
    }
    for (char &ch : binary)
    {
        if (ch == '0')
        {
            ch = '1';
        }
        else if (ch == '1')
        {
            ch = '2';
        }
    }
    int sum = 0;
    for (char &ch : binary)
    {
        sum += ch - '0';
    }

    return (sum % 2 == 1);
}
int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (isMagical(i))
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}