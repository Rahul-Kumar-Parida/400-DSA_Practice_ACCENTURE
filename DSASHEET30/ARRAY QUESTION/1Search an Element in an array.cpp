#include<iostream>
using namespace std;

int main(){
    int n,target;
    cin>>n>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==target){
            cout<<mid<<endl;
            return 0;
        }else if(arr[mid]>target){
            right=mid-1;
        }else{
            left=mid+1;
        }
    }
    cout<<-1<<endl;
    return 0;
}