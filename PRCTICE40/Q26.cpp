#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==0||n==1){
        cout<<n<<endl;
        return 0;
    }
    int a=0;
    int b=1;
    int c=0;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    cout<<c<<endl;
    return 0;
}