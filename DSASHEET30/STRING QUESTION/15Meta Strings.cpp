#include<iostream>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(s1.size()!=s2.size()) {
        cout<<0<<endl;
        return 0;
    }

    if(s1==s2) {
        cout<<0<<endl;
        return 0;
    };
    int i=0;
    int j=s1.size()-1;
    while(s1[i]==s2[i]){
        i++;
    }
    while(s1[j]==s2[j]){
        j--;
    }
    swap(s1[i],s1[j]);
    if(s1==s2){
        cout<<1<<endl;
    }else{
        cout<<0<<endl;
    }
    return 0;
}