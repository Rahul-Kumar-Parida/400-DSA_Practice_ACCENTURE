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
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(n<=2){
        cout<<0<<endl;
        return 0;
    }
    int sum=0;
    for(int i=2;i<n;i++){
            if(isprime(i)){
                sum+=arr[i];
            }
    }

    cout<<sum<<endl;
    return 0;
}