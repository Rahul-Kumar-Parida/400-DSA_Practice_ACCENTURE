// Count number of vowels, consonants, spaces in String
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int vowel = 0, space = 0, consonant = 0;
    for (char &ch : str)
    {
        ch = tolower(ch);
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowel++;
        }
        else if (str[i] == ' ')
        {
            space++;
        }
        else if (isalpha(str[i]))
        {
            consonant++;
        }
    }
    cout << "vowel : " << vowel << " consonant : " << consonant << " space: " << space << endl;
    return 0;
}
