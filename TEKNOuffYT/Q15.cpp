#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int count=0;
    string w="";
    for(int i=0;i<str.length();i++){
        if(str[i]=='1'){
            count++;
        }else{
            if(count>0){
                w+='A'+count-1;
                count=0;
            }
            
        }
    }
    if(count>0){
        w+='A'+count-1;
    }

    cout<<w<<endl;
    return 0;
}