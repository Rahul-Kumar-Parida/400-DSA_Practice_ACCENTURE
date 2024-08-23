//maximum subarray
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int curr= arr[0];
    int glo = arr[0];
    for(int i=1;i<n;i++){
        curr = max(arr[i], curr+ arr[i]);
        if(curr>glo){
            glo=curr;
        }
    }

    cout<< glo<<endl;

    return 0;
}