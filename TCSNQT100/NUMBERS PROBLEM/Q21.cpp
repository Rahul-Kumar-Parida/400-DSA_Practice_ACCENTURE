// Print all prime factors of the given number
#include <iostream>
#include <vector>
using namespace std;

vector<int> findPrimeFactors(int n)
{
    vector<int> factors;
    while (n % 2 == 0)
    {
        factors.push_back(2);
        n /= 2;
    }
    // check for odd

    for (int i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 2)
    {
        factors.push_back(n);
    }

    return factors;
}

int main()
{
    int n;
    cin >> n;

    vector<int> result = findPrimeFactors(n);
    for (int ch : result)
    {
        cout << ch << " ";
    }

    return 0;
}
