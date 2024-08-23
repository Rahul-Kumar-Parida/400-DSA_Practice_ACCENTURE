#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
// int main(){
//     vector<int>arr;
//     int num;
//     while(cin>>num){
//         arr.push_back(num);
//     }
//     int ele=arr.back();
//     arr.pop_back();
//     unordered_map<int,int>freq;
//     for(int it:arr){
//         freq[it]++;
//     }
//     for(auto it :freq){
//         if(it.first==ele){
//             cout<<it.second;
//             return 0;
//         }
//     }
//     cout<<-1<<endl;
//     return 0;

// }

int main(){
    int n,ele;
    cin>>n>>ele;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}