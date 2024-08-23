#include<iostream>

using namespace std;

int main(){
    int arr[]={1,2,3,4,5,5,6,6,5,9,2,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);

    int first=-1;
    int second=-1;
    for(int i=0;i<size;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }else if(arr[i]>second && arr[i]!=first){
            second= arr[i];
        }
    }

    cout<<second<<endl;

    return 0;
}