// Remove characters from first string present in the second string
#include <iostream>
#include <string>
using namespace std;
// int main()
// {
//     string str1, str2;
//     cin >> str1 >> str2;
//     string res = "";
//     for (int i = 0; i < str1.length(); i++)
//     {
//         bool check = true;
//         for (int j = 0; j < str2.length(); j++)
//         {
//             if (str1[i] == str2[j])
//             {
//                 check = false;
//                 break;
//             }
//         }
//         if (check)
//         {
//             res += str1[i];
//         }
//     }

//     cout << res << endl;
//     return 0;
// }

// #include <iostream>
#include <unordered_set>
// #include <string>
using namespace std;
int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    unordered_set<char> uniq;
    for (char ch : str2)
    {
        uniq.insert(ch);
    }
    string res = "";
    for (char ch : str1)
    {
        if (uniq.find(ch) == uniq.end())
        {
            res += ch;
        }
    }

    cout << res << endl;
    return 0;
}