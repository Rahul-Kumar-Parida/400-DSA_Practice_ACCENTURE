// Count number of words in a given string
#include <iostream>
#include <string>
using namespace std;
//m1-------------------------------
// int main()
// {
//     string str;
//     getline(cin, str);
//     int n = str.length();
//     int i = 0, j = 0;
//     int count = 0;
//     while (i < n)
//     {
//         while (i < n && str[i] == ' ')
//         {
//             i++;
//         }
//         j = i + 1;
//         while (j < n && str[j] != ' ')
//         {
//             j++;
//         }
//         if (i < j)
//         {
//             count++;
//         }
//         i = j + 1;
//     }
//     cout << count << endl;
//     return 0;
// }


//m2----------------------------------------
int main()
{
    string str;
    getline(cin, str);
    bool inword = false;
    int count = 0;
    for (char ch : str)
    {
        if (ch == ' ')
        {
            if (inword)
            {
                inword = false;
            }
        }
        else
        {
            if (!inword)
            {
                count++;
                inword = true;
            }
        }
    }

    cout << count << endl;

    return 0;
}