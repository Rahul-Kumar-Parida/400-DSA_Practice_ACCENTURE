#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt8= n/8;
    int cnt40 = n/40;
    cout << cnt8-cnt40 << endl;

    return 0;
}