#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n-1;i>0;i--){
        int temp=arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=temp;
    }
    for(int ch:arr){
        cout<<ch<<" ";
    }
    return 0;
}