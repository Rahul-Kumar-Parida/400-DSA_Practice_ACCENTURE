#include<iostream>
using namespace std;
int findMissing(int arr[], int n) {
        // code here
      
        int commonDiff = (arr[n-1]-arr[0])/n;
        int low = 0;
        int high = n-1;
        
        while(low < high){
            int mid = low + (high-low)/2;
            if(arr[mid] == arr[0] + commonDiff*mid){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
        return arr[0] + commonDiff*low;
    }
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int f1=arr[0];
    // int l1 = arr[n-1];
    // int sum=0;
    // for(int i=0;i<n;i++){
    //     sum+=arr[i];
    // }
    // int totalSum=(n+1)*(f1+l1)/2;
    // cout<<totalSum-sum<<endl;




    int res = findMissing(arr,n);
    cout<<res<<endl;
    return 0;
}