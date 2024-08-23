#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int totalSum=n*(n+1)/2;
    for(int i=0;i<n;i++){
        totalSum-=arr[i];
    }
    cout<<totalSum<<endl;
    return 0;
}
