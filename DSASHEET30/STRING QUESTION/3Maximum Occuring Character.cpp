#include<iostream>
#include<climits>
#include<unordered_map>
using namespace std;

int main(){
    string str;
    cin>>str;
    
    unordered_map<char, int> newStr;
    for(int i = 0; i < str.length(); i++){
        newStr[str[i]]++;
    }

    int max = -1;
    char res = '\0'; // Result character
    
    for(auto ch : newStr){
        if(ch.second > max){
            max = ch.second;
            res = ch.first;
        } else if(ch.second == max){
            if(ch.first < res){
                res = ch.first;
            }
        }
    }

    cout << res << endl;
    return 0;
}
