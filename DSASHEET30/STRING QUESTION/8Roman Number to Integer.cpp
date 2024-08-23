#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    string str;
    cin>>str;
    unordered_map<char,int> newStr={
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    int result=0;
    int prev=0;
    for(int i=str.length()-1;i>=0;i--){
        int curr= newStr[str[i]];
        if(curr<prev){
            result-=curr;
        }else{
            result+=curr;
        }
        prev=curr;
    }
    cout<<result;
    return 0;
    
}