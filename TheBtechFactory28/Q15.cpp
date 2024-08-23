// Search a 2d matrix
#include <iostream>
using namespace std;

int main()
{
    int r, c, target;
    cin >> r >> c >> target;
    int matrix[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int i = 0;
    int j = c - 1;
    while (i < r && j >= 0)
    {
        if (matrix[i][j] == target)
        {
            cout << "yes" << endl;
            return 0;
        }
        else if (matrix[i][j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    cout << "no" << endl;
    return 0;
}