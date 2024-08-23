// Search a 2d matrix;

#include <iostream>
#include <vector>
using namespace std;

bool searchMatric(const vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size();
    if (rows == 0)
        return false;
    int cols = matrix[0].size();
    if (cols == 0)
        return false;
    int s = 0;
    int e = rows * cols - 1;
    while (s <= e)
    {

        int mid = s + (e - s) / 2;
        int element = matrix[mid / cols][mid % cols];
        if (element == target)
        {
            return true;
        }
        else if (target < element)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return false;
}
int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> matrix(r, vector<int>(c));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int target;
    cin >> target;
    bool found = searchMatric(matrix, target);
    cout << (found ? 1 : 0) << endl;
    return 0;
}