//magical number

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++){
        int sum=0;
        int num=i;
        while(num>0){
            if(num&1){
                sum+=2;
            }else{
                sum+=1;
            }
            num=num>>1;
        }
        if(sum%2!=0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}