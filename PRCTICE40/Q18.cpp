#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n=str.length();
    int l=0;
    int r=n-1;
    while(l<r){
        if(str[l]!=str[r]){
            cout<<"Not"<<endl;
            return 0;
        }
        l++;
        r--;
    }

    cout<<"Yes"<<endl;
    return 0;
}