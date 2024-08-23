#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    float evenSum=0;
    float oddSum=0;
    for(int i=m;i<=n;i++){
        if(i%2==0){
            evenSum+=sqrt(i);
        }else{
            oddSum+=sqrt(i);
        }
    }

    cout<<fixed<<setprecision(3)<<(evenSum-oddSum);
    return 0;

}