#include<bits/stdc++.h>
using namespace std;

// int removeduplicate(int arr[], int n){
//     int j=0;
//     for(int i=0;i<n-1;i++){
//         if(arr[i]!=arr[i+1]){
//             arr[j++]=arr[i];
//         }
//     }
//     arr[j++]=arr[n-1];

//     return j;
// }

// int main(){
//     int arr[]={1,1,1,2,2,3,3,4,5,6,7,7,7,8,9};
//     int size= sizeof(arr)/sizeof(arr[0]);

//     int res = removeduplicate(arr,size);
//     for(int i=0;i<res;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }


//unorderd set

vector<int> removeDuplicate(int arr[], int n){
    unordered_set<int> uniq;
    vector<int> ans;

    for(int i=0;i<n;i++){
        if(uniq.find(arr[i])==uniq.end()){
            uniq.insert(arr[i]);
            ans.push_back(arr[i]);
        }
    }
    return ans;
}

int main(){
    int arr[]={1,2,3,4,4,4,4,5,6,6,7,3,3,2};
    int size= sizeof(arr)/sizeof(arr[0]);
    vector<int> res = removeDuplicate(arr,size);

    for(auto it :res){
        cout<<it<<" ";
    }

    return 0;
}
