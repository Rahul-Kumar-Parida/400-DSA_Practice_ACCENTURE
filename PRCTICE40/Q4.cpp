#include<iostream>
using namespace std;
int main(){
    int num ,n;
    cin>>num>>n;
    int digit=num%n;
    int ans=0;
    if(n/2>=digit){
        ans=num-digit;
    }else{
        ans=num+(n-digit);
    }
    cout<<ans<<endl;
    return 0;
}