#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==0) {
        cout<<"0"<<endl;
        return 0;
    }
    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }
    string news="";
    while(n>0){
        if(n&1){
            news='1'+news;
        }else{
            news='0'+news;
        }
        n=n>>1;
    }
    cout<<news<<endl;
    return 0;
}