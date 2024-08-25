//goggly number;
#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
    if(n<=1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    if(n%2==0){
        return 0;
    }

    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    if(isprime(sum)){
        cout<<"yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    return 0;
}