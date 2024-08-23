#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c0=0;
    int c1=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            c0++;
        }else{
            c1++;
        }
    }
    if(c1>c0){
        cout<< 2*c0;
    }else{
        cout<< 2*c1;
    }
   
   return 0;
}