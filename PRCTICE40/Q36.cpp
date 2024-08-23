#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    int first=INT_MAX;;
    int sec=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<first){
            sec=first;
            first=arr[i];
        }else if(arr[i]<sec && arr[i]!=first){
            sec=arr[i];
        }
    }
    if(first+sec <= sum ){
        cout<<first*sec<<endl;
    }else{
        cout<<-1<<endl;
    }
    return 0;
}