#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    int n1, n2;
    cin >> n1;
    cin.ignore(); // Ignore the newline character after reading n1
    vector<string> word1(n1);
    for (int i = 0; i < n1; i++)
    {
        getline(cin, word1[i]);
    }
    cin >> n2;
    cin.ignore(); // Ignore the newline character after reading n2
    vector<string> word2(n2);
    for (int i = 0; i < n2; i++)
    {
        getline(cin, word2[i]);
    }

    string conc1 = "";
    string conc2 = "";
    for (const string &ch : word1)
    {
        conc1 += ch;
    }
    for (const string &ch : word2)
    {
        conc2 += ch;
    }

    if (conc1 == conc2)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}
