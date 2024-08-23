#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minbuy=arr[0];
    int maxi=0;
    for(int i=1;i<n;i++){
        int diff=arr[i]-minbuy;
        if(diff>maxi){
            maxi=diff;
        }
        if(arr[i]<minbuy){
            minbuy=arr[i];
        }
    }

    cout<<maxi<<endl;
    return 0;
}