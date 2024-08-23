#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;
    char ch1 = 'a';
    char ch2 = 'b';

    for(int i=0;i<str.length();i++){
        if(str[i]==ch1){
            str[i] = ch2;
        }else if(str[i] == ch2){
            str[i] =ch1;
        }
    }

    cout<< str <<endl;
    return 0;
}