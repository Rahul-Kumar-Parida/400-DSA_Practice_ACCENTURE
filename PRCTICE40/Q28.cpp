#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>order;
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++){
        if(freq[arr[i]]==0){
            order.push_back(arr[i]);
        }
        freq[arr[i]]++;
    }
    for(int i=0;i<order.size();i++){
        cout<<order[i]<<":"<<freq[order[i]]<<" ";
    }

    return 0;
}