#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    char ch1,ch2;
    cin>>ch1>>ch2;
    for(char &ch:str){
        if(ch==ch1){
            ch=ch2;
        }else if(ch==ch2){
            ch=ch1;
        }
    }
    cout<<str<<endl;
    return 0;
}