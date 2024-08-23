#include<iostream>
#include<unordered_map>
using namespace std;

unordered_map<int,int> countOccurence(int arr[],int size){
    unordered_map<int,int>occur;
    for(int i=0;i<size;i++){
        occur[arr[i]]++;
    }
    return occur;
}

int main(){
    int arr[]={1,2,2,3,4,5,5,6};
    int size= sizeof(arr)/sizeof(arr[0]);
    unordered_map<int,int> result = countOccurence(arr,size);
    for (auto& pair : result) {
        cout << pair.first << ": " << pair.second << endl;
    }
}