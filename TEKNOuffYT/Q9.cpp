#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n;
    cin>>n;
    int j=0;
    int count=0;
   for(int i=0;i<=str.length();i++){
    if(str[i]==' '|| str[i]=='\0'){
        count++;
        if(count==n){
            cout<<str.substr(j,i-j)<<endl;
            return 0;
        }
    }
   }

    cout<<"Not found"<<endl;
    return 0;
}