#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>sumMap;
    int sum=0;
    int max_len=0;
    for(int i=0;i<n;i++){
        sum+=(arr[i]==0)?-1:1;
        if(sum==0){
            max_len=i+1;
        }
        if(sumMap.find(sum)!=sumMap.end()){
            max_len=max(max_len,i-sumMap[sum]);
        }else{
            sumMap[sum]=i;
        }
    }

    cout<<max_len<<endl;
    return 0;
}