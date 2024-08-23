#include<iostream>
#include<string>
using namespace std;


int main(){
    string s;
    cin>>s;
    int upp_cnt=0;
    int low_cnt=0;

    for(int i=0;i<s.length();i++){
        if(s[i]>=65 && s[i]<=90){
            upp_cnt++;
        }else{
            low_cnt++;
        }
    }
    if(upp_cnt>low_cnt){
        for(int i=0;i<s.length();i++){
            if(s[i]>=97 && s[i]<=122){
                s[i]=s[i]-32;
            }
        }
    }else{
        for(int i=0;i<s.length();i++){
            if(s[i]>=65 && s[i]<=90){
                s[i]=s[i]+32;
            }
        }
    }

    cout<< s <<endl;

    return 0;
}