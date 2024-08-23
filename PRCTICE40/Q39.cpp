#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int divsum=0;
    int total=m*(m+1)/2;
    for(int i=n;i<=m;i+=n){
        divsum+=i;
    }
    int notdiv = total-divsum;
    cout<<notdiv-divsum;
    return 0;
}