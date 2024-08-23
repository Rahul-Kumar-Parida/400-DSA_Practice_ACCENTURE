#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num,diff;
    cin>>num>>diff;
    int count=0;
    for(int i=0;i<n;i++){
        int s=num-arr[i];
        if(abs(s)<=diff){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}