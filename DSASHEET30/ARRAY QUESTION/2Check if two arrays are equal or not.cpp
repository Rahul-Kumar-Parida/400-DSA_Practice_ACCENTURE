#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    if(n!=m){
        cout<<"False"<<endl;
        return 0;
    }
    unordered_map<int,int> freq1,freq2;
    for(int i=0;i<n;i++){
        freq1[arr1[i]]++;
    }
    for(int i=0;i<m;i++){
        freq2[arr2[i]]++;
    }
    if(freq1==freq2){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}