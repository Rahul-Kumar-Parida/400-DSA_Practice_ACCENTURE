#include<iostream>
using namespace std;

int kthLargest(int arr[], int size, int k){
    for(int i=0;i<size-1;i++){
        int mini=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[mini],arr[i]);
    }

     int distinctCount = 0;
    int lastDistinct = -1;

    // Iterate from the end of the array to handle duplicates
    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] != lastDistinct) {
            distinctCount++;
            lastDistinct = arr[i];
            if (distinctCount == k) {
                return arr[i];
            }
        }
    }

    // If there are less than k distinct elements
    return -1; // or some error value indicating k is out of range
}

int main(){
    int arr[]={3,2,1,5,6,4,9,9,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int result = kthLargest(arr,size,k);
    cout<<result<<endl;
    return 0;
}