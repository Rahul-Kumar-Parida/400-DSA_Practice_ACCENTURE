#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int n = str.length();
    string news = "";
    int i = 0, j = 0;
    while (i < n)
    {
        while (i < n && str[i] == ' ')
        {
            i++;
        }
        j = i;
        while (j < n && str[j] != ' ')
        {
            j++;
        }
        if (i < j)
        {
            string w = str.substr(i, j - i);
            news = w + " " + news;
        }
        i = j + 1;
    }

    cout << news << endl;
    return 0;
}