// Prime numbers in a given range

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int start, end;
    cin >> start >> end;
    vector<int> arr;

    for (int i = start; i <= end; i++)
    {
        if (i == 2)
        {
            arr.push_back(i); // 2 is the only even prime number
            continue;
        }

        if (i % 2 == 0)
        {
            continue; // Skip even numbers greater than 2
        }
        if (i <= 1)
        {
            continue;
        }
        bool check = true;
        int num = i;
        for (int j = 3; j <= sqrt(num); j += 2)
        {

            if (num % j == 0)
            {
                check = false;
                break;
            }
        }
        if (check)
        {
            arr.push_back(i);
        }
    }

    for (int ch : arr)
    {
        cout << ch << " ";
    }

    return 0;
}
