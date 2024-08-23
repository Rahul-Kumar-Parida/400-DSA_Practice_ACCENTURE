//Binary Array Sorting
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]==1){
            swap(arr[i],arr[j]);
            j--;
        }else if(arr[i]==0){
            i++;
        }
    }
    for(int ch: arr){
        cout<<ch<<" ";
    }
    return 0;
}