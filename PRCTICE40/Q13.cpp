#include<iostream>
using namespace std;
int main(){
    int n,tr;
    cin>>n>>tr;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0;
    int high=n-1;
    while(low<=high ){
        int mid= low+(high-low)/2;
        if(arr[mid]==tr){
            cout<<"yes"<<endl;
            return 0;
        }else if(arr[mid]>tr){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    cout<<"No"<<endl;
    delete[] arr;
    return 0;
}