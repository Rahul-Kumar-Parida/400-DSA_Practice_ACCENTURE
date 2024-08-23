#include<iostream>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    string newstr="";
    int i=0,j=0;
    while(i<str1.length()&&j<str2.length()){
        newstr+=str1[i++];
        newstr+=str2[j++];
    }
    while(i<str1.length()){
        newstr+=str1[i++];
    }
    while(j<str2.length()){
        newstr+=str2[j++];
    }
    cout<<newstr<<endl;
    return 0;
}