#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    bool flip=false;
    for(int i=0;i<n;i++){
        if((arr[i]==0&& !flip) || (arr[i]==1 && flip)){
            count++;
            flip=!flip;
        }
    }

    cout<<count<<endl;
    return 0;
}