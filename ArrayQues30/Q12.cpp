#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int totalSum =0;
    for(int i=0;i<n;i++){
        totalSum+=arr[i];
    }

    int leftSum=0;
    for(int i=0;i<n;i++){
        totalSum=totalSum-arr[i];
        if(leftSum == totalSum){
            cout<<i+1<<endl;
            return 0;
        }
        leftSum+=arr[i];
    }

    cout<<-1<<endl;
    return 0;
    
}