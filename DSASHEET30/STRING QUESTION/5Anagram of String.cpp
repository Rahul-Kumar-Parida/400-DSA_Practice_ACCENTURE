// Anagram of String
#include<iostream>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    int arr[26]={0};
    for(char ch: str1){
        arr[ch-'a']++;
    }
    for(char ch: str2){
        arr[ch-'a']--;
    }
    int ans=0;
    for(int i=0;i<26;i++){
        if(arr[i]!=0){
            ans+=abs(arr[i]);
        }
    }
    cout<<ans;
    return 0;
}