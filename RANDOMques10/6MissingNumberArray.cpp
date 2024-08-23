#include<iostream>
using namespace std;

int findMissing(int arr[],int size){
    int n= size+1;
    int totalSum = n*(n+1)/2;
    int arraySum=0;
    for(int i=0;i<size;i++){
        arraySum+=arr[i];
    }

    return totalSum-arraySum;
}

int main(){
    int arr[]={1,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int result = findMissing(arr,size);
    cout<<result<<endl;
    return 0;
}