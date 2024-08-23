#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n=str.length();
    int i=n-1,j=n-1;
    while(i>0){
        while(i>0 && str[i]==' '){
            i--;
        }
        j=i;
        while(j>0&& str[j]!=' '){
            j--;
        }
        if(i>j){
            string w=str.substr(j,i-j);
            cout<<w.length()<<endl;
            return 0;
        }
        
    }
    cout<<-1<<endl;
    return 0;
}