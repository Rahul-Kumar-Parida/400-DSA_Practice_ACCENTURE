#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // count digit
    int digit = 0;
    int neww = n;
    int temp = n;
    while (neww > 0)
    {
        digit++;
        neww /= 10;
    }
    int sum = 0;
    while (n > 0)
    {
        int i = n % 10;
        sum = sum + pow(i, digit);
        n /= 10;
    }
    if(sum==temp){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }

    return 0;
}