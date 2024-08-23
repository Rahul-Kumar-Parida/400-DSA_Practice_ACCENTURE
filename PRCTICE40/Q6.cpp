#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a=n/m;
    if(n%m!=0){
        a+=1;
    }
    cout<<a<<endl;
    return 0;
}