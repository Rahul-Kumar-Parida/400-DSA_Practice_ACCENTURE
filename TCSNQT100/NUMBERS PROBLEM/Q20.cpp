// Factors of a given number
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            arr.push_back(i);
            if (i != n / i)
            {
                arr.push_back(n / i);
            }
        }
    }
    sort(arr.begin(), arr.end());
    for (int ch : arr)
    {
        cout << ch << " ";
    }
    return 0;
}
