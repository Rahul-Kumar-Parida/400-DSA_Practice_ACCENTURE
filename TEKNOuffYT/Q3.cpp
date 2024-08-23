#include<iostream>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;

    for(char &ch:str1){
        ch=tolower(ch);
    }
    for(char &ch:str2){
        ch=toupper(ch);
    }
    cout<<str1<<" "<<str2;
    return 0;
}