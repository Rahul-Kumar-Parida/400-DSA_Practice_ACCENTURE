#include<iostream>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    int n1=str1.length();
    int n2=str2.length();
    if(n1!=n2){
        cout<<0<<endl;
        return 0;
    }
    string str3 = str1+str1;
    for(int i=0;i<str3.length();i++){
        if(str3.substr(i,n1)==str2){
            cout<<1<<endl;
            return 0;
        }
    }
    cout<<0<<endl;
    return 0;
}