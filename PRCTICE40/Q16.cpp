#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    if(str1.length()!=str2.length()){
        cout<<"No"<<endl;
        return 0;
    }
    unordered_map<char,int>S1;
    for(char ch:str1){
        S1[ch]++;
    }
    for(char ch:str2){
        S1[ch]--;
    }
    for(auto ch: S1){
        if(ch.second!=0){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}