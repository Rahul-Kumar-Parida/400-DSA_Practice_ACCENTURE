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
    vector<int>pos;
    vector<int>neg;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            pos.push_back(arr[i]);
        }else{
            neg.push_back(arr[i]);
        }
    }
    int p=0,t=0,i=0;
    while(p<pos.size()&& t<neg.size()){
        if(i%2==0){
            arr[i++]=pos[p++];
        }else{
            arr[i++]=neg[t++];
        }
    }
    while(p<pos.size()){
        arr[i++]=pos[p++];
    }
    while(t<neg.size()){
        arr[i++]=neg[t++];
    }

    for(int it:arr){
        cout<<it<<" ";
    }
    return 0;
}