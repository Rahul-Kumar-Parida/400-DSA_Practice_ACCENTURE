#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n;
    cin>>n;
    if (n > str.length()) {
    n = str.length();
}
    char ch;
    cin>>ch;
    int count=0;
    for(int i=0;i<n;i++){
        if(str[i]==ch){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}