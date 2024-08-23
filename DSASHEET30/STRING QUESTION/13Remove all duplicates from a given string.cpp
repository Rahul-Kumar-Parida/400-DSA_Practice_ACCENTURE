//Remove duplicate
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    string str;
    cin>>str;
    unordered_set<char>Set;
    string res="";
    for(char ch:str){
        if(Set.find(ch)==Set.end()){
            res+=ch;
            Set.insert(ch);
        }
    }
    
    cout<<res<<endl;
    return 0;
}