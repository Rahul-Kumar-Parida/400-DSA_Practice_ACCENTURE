#include<iostream>
using namespace std;

bool isMagical(int n){
    int sum=0;
    while(n>0){
        int digit = n%2;
        sum+=(digit==0)?1:2;
        n/=2;
    }

    return (sum%2!=0);
}




int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++){
        if(isMagical(i)){
            count++;
        }
        
    }
    cout<<count<<endl;
    return 0;
}