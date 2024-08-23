#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int count=0;
    int max=1;
    for(int i=0;i<str.length()-1;i++){
        if(str[i]!=str[i+1]){
            count++;
            if(count>max){
                max=count;
            }
        }else{
            count=0;
        }
    }

    cout<<max<<endl;
    return 0;
}