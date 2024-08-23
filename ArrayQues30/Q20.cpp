#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
    string str;
    cin>>str;
    if(str.length()<4){
        cout<<false;
        return 0;
    }
    if(isdigit(str[0])){
        cout<<false;
        return 0;
    }
    bool hasDigit=false;
    bool hasUpperCase = false;

    for(char ch:str){
        if(isdigit(ch)){
            hasDigit=true;
        }else if(isupper(ch)){
            hasUpperCase =true;
        }else if(ch==' ' || ch== '/'){
            cout<<false;
            return 0;
        }
    }

    if(hasDigit && hasUpperCase){
        cout<<true<<endl;
    }else{
        cout<<false<<endl;
    }

    return 0;
}