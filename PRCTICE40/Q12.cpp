#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<=1){
        cout<<"N0"<<endl;
        return 0;
    }
    if(n==2){
        cout<<"Yes"<<endl;
        return 0;
    }
    if(n%2==0){
        cout<<"N0"<<endl;
        return 0;
    }
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0){
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"Yes"<<endl;
    return 0;
}