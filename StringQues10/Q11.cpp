#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "the sky is blue";
    int N = str.length();
    int i = 0,j=0;
    string result="";
    while (i < N)
    {
        while (i < N && str[i] == ' ')
        {
            i++;
        }
        j = i + 1;
        while (j < N && str[j] != ' '){
            j++;
        }
        if (i < j)
        {
            string w = str.substr(i, j - i);
            // Append the word to the result with a leading space
            result = w + " " + result;
        }

        // Move to the next word
        i = j + 1;
    }
    

    cout<< result<<endl;

    return 0;
}