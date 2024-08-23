// Permutations in which N people can occupy R seats in a classroom
#include <iostream>
using namespace std;

long long permutations(int N, int R)
{
    long long result = 1;
    for (int i = 0; i < R; i++)
    {
        result *= (N - i);
    }

    return result;
}

int main()
{
    int N, R;
    cin >> N >> R;

    int ans = permutations(N, R);

    cout << ans << endl;

    return 0;
}
