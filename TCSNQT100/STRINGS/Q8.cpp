// Remove brackets from an algebraic expression
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
        if (ch != '(' && ch != ')')
        {
            news += ch;
        }
    }
    cout << news << endl;
    return 0;
}
