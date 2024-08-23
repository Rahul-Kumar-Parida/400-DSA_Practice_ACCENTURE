// Rotation of elements of array- left and right

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, r;
    cin >> n >> r;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> temp(n);
    r = r % n;
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[(i - r + n) % n];
    }

    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
    return 0;
}
