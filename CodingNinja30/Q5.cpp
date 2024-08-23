#include <iostream>
using namespace std;

char decimalHexaDecimal(int decimal)
{

    string news = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    return news[decimal];
}
int main()
{
    int N, num;
    cin >> N >> num;

    if (N < 2 || N > 36)
    {
        cout << "ERROR" << endl;
    }
    if (num == 0)
    {
        cout << "0" << endl;
        return 0;
    }
    string one = "";

    while (num > 0)
    {
        int rem = num % N;
        one = decimalHexaDecimal(rem) + one;
        num /= N;
    }

    cout << one << endl;

    return 0;
}