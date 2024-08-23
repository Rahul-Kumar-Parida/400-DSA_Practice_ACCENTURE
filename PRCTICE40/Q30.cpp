#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=1;
    int last=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]>last){
            count++;
            last=arr[i];
        }
    }
    cout<<count<<endl;
    return 0;
}