#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxRight=-1;
    for(int i=n-1;i>=0;i--){
        int curr=arr[i];
        arr[i]=maxRight;
        if(curr>maxRight){
            maxRight=curr;
        }
    }
    for(int ch:arr){
        cout<<ch<<" ";
    }
    return 0;
}