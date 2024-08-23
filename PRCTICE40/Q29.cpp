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
    vector<int>even;
    vector<int>odd;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            even.push_back(arr[i]);
        }else{
            odd.push_back(arr[i]);
        }
    }
    int i=0,j=0,k=0;
    while(i<even.size()&&j<odd.size()){
        arr[k++]=even[i++];
        arr[k++]=odd[j++];
    }
    while(i<even.size()){
        arr[k++]=even[i++];
    }
    while(j<odd.size()){
        arr[k++]=odd[j++];
    }

    for(int it:arr){
        cout<<it<<" ";
    }
    return 0;
}