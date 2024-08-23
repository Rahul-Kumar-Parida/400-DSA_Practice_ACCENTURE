#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arr[] = {5, 2, -4, 1, 3};
    int n = 5;
    int sum = 0, count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            sum = sum + arr[i];
            count++;
        }
    }

    cout << floor(sum / count);

    return 0;
}