#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    int i=0;
    int j=str.length()-1;
    while(i<j){
        if(str[i]!=str[j]){
            cout<<"no"<<endl;
            return 0;
        }
        i++;
        j--;
    }
    cout<<"yes"<<endl;
    return 0;
}