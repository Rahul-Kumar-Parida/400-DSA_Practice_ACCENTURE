#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    int j = 0, k = 1;
    for(int i=0;i<str2.length();i++){
        if(str2[i]==str1[j]){
            j++;
            k++;
        }
    }
    cout << k<< endl;

    return 0;
}