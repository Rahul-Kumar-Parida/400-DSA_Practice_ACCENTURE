#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    vector<string>newStr;
    int i=0;
    int j=0;
    int n=str.length();
    while(i<n){
        while(i<n&& str[i]==' '){
            i++;
        }
        j=i;
        while(j<n&& str[j]!=' '){
            j++;
        }
        if(i<j){
            newStr.push_back(str.substr(i,j-i));
        }
        i=j+1;
    }

    for(int i=newStr.size()-1;i>=0;i--){
        cout<<newStr[i];
        if (i > 0) {
            cout << " ";
        }
    }
    return 0;
}