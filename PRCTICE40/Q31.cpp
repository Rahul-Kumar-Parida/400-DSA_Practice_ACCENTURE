#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long ans=(n*(n+1)/2 )+1;
    cout<<ans%1000000008<<endl;
    return 0;
}