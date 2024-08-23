#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int m;
    cin>>m;

    int r = num%m;
    if(r<(m+1)/2){
        cout<<num-r;
    }else{
        cout<<num+m-r;
    }

    return 0;
}