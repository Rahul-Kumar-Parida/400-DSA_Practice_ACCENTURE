#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>newarr(n);
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            newarr[k++]=arr[i];
        }
    }
    while(k<n){
        newarr[k++]=0;
    }
    for(int it:newarr){
        cout<<it<<" ";
    }
    return 0;
}
