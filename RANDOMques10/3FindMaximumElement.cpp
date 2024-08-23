#include<iostream>
#include<limits.h>
using namespace std;

int maxElement(int arr[],int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int arr[]={1222,2,3,4,135,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int result = maxElement(arr,size);
    cout<<"max element is " << result<<endl;
    return 0;
}