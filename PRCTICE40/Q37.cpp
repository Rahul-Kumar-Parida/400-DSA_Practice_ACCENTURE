#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cin>>n1>>n2;
    int carry=0;
    int count=0;
    while(n1>0 ||n2>0){
        int d1=n1%10;
        int d2=n2%10;
        if(d1+d2+carry>9){
            carry=1;
            count++;
        }else{
            carry=0;
        }
        n1/=10;
        n2/=10;
    }
    cout<<count<<endl;
    return 0;
}