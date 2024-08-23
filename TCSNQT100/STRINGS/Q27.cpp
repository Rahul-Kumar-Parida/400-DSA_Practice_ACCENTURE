// Write a program to find a substring within a string. If found display its starting position

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

// int main() {
//     string str1, str2;
//     getline(cin, str1); // Read the entire line of input into str1
//     cin >> str2; // Read the substring to search for into str2

//     // Find the starting position of str2 in str1
//     size_t pos = str1.find(str2);

//     // If found, print the position; otherwise, print an appropriate message
//     if (pos != string::npos) {
//         cout << pos << endl;
//     } else {
//         cout << "Substring not found" << endl;
//     }

//     return 0;
// }

int main()
{
    string str1, str2;
    getline(cin, str1);
    cin >> str2;
    int n = str1.length();
    string res;
    int i = 0, j = 0;
    while (i < n)
    {
        while (i < n && str1[i] == ' ')
        {
            i++;
        }
        j = i + 1;
        while (j < n && str1[j] != ' ')
        {
            j++;
        }
        if (i < j)
        {
            string w = str1.substr(i, j - i);
            if (w == str2)
            {
                cout << i << endl;
                return 0;
            }
        }
        i = j + 1;
    }

    return 0;
}
