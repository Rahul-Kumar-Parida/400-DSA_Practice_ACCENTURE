#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=0,j=n-1;
    int m=0;
    while(m<=j){
        if(arr[m]==0){
            swap(arr[i],arr[m]);
            i++;
            m++;
        }else if(arr[m]==2){
            swap(arr[j],arr[m]);
            j--;
        }else if(arr[m]==1){
            m++;
        }
    }
    for(int it:arr){
        cout<<it<<" ";
    }
    return 0;
}