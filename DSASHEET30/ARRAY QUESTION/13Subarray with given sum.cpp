#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxsum=arr[0];
    int currsum=arr[0];
    for(int i=1;i<n;i++){
        currsum=max(arr[i],currsum+arr[i]);

        maxsum=max(maxsum,currsum);
    }
    cout<<maxsum<<endl;
    return 0;
}