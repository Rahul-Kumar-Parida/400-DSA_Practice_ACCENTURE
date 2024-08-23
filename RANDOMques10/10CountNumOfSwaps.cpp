#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int swapCount=0;

    for(int i=0;i<n-1;i++){
        int mini =i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        if(mini != i){
            swap(arr[mini], arr[i]);
            swapCount++;
        }
    }

    cout<<swapCount;
    return 0;
}