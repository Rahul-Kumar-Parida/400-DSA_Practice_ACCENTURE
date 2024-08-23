#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int lsum=0; 
    for(int i=0;i<n;i++){
        sum-=arr[i];
        if(sum==lsum){
            cout<<i+1<<endl;
            return 0;
        }
        lsum+=arr[i];
    }

    cout<<-1<<endl;
    return 0;
}