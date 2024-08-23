#include <iostream>
using namespace std;
int differenceOfSum(int n1, int n2)
{
    int sum = (n2 * (n2 + 1)) / 2;
    int divsum = 0;
    for (int i = n1; i <= n2; i += n1)
    {

        divsum += i;
    }
    int notDiv = sum - divsum;

    return notDiv - divsum;
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int diff = differenceOfSum(n1, n2);
    cout << diff << endl;
    return 0;
}