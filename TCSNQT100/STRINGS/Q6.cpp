// Remove characters from a string except alphabets
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    string news = "";
    news.reserve(str.length());

    for (char ch : str)
    {
        if ((ch >= 'A' && ch <= 'Z') || ch >= 'a' && ch <= 'z')
        {
            news += ch;
        }
    }

    cout << news << endl;
    return 0;
}
