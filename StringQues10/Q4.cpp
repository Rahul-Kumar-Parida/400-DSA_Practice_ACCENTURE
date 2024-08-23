#include<iostream>
#include<string>

using namespace std;

int main(){
    int n=3;
    string s= "abc";
    string p="";
    for(int i=0;i<n;i++){
        p=p+s;
    }

    cout<<p<<endl;

    return 0;
}