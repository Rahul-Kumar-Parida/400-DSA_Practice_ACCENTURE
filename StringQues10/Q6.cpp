#include<iostream>
#include<string>

using namespace std;

int main(){
    string str1 = "Hello, World";
    string str2 = "World";

    for(int i=0;i<str1.length();i++){
        if(str1[i]==str2[0]){
            cout<<i<<endl;
        }
    }

    return 0;
}