//Move all negative elements to end
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
    vector<int>newArr;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            newArr.push_back(arr[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            newArr.push_back(arr[i]);
        }
    }

    for(int i=0;i<n;i++){
        cout<<newArr[i]<<" ";
    }
    return 0;
}