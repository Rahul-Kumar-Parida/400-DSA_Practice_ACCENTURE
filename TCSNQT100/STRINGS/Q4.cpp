// Remove all vowels from the string

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    string news = "";
    news.reserve(str.length());
    for (char ch : str) // Use range-based for loop for simplicity
    {
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
        {
            news += ch; // Append character if it's not a vowel
        }
    }
    cout << news << endl;

    return 0;
}
