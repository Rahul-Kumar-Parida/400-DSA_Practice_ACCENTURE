#include <iostream>
#include <string>
#include <climits>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int n = str.length();
    int i = 0, j = 0;

    int max = INT_MIN;
    string news;
    while (i < n)
    {
        int count = 0;
        while (i < n && str[i] == ' ')
        {
            i++;
        }
        j = i;
        while (j < n && str[j] != ' ')
        {
            j++;
            count++;
        }
        if (i < j)
        {
            if (count > max)
            {
                max = count;
                news = str.substr(i, j - i);
            }
        }
        i = j + 1;
    }
    cout << news << endl;
    return 0;
}