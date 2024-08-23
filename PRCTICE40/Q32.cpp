#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<=9){
        cout<<n<<endl;
        return 0;
    }
    if(n%2==0){
        cout<<floor(static_cast<double>(n-1)/2)<<endl;
    }else{
        cout<<floor(static_cast<double>(n)/2)<<endl;
    }
    return 0;
}