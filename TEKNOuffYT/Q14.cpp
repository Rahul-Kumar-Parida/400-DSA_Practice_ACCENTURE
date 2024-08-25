#include<iostream>
#include<climits>
using namespace std;
int seconLargest(int arr[],int n){
    int first=INT_MIN;
    int second = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }else if(arr[i]>second && arr[i]!=first){
            second=arr[i];
        }
    }
    return (second==INT_MIN)?0:second;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    int slarge=seconLargest(arr,n);
    for(int i=0;i<n;i++){
        if(arr[i]==slarge){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}