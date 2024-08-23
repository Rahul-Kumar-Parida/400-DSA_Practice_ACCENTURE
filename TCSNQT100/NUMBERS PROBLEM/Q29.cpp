// Sum of numbers in the given range
#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int noOfterms = n2 - n1 + 1;
    int summ = (noOfterms * (n1 + n2)) / 2;
    cout << summ << endl;

    return 0;
}
