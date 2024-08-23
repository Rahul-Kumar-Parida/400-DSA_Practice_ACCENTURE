#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int N= str.length();
    int i=0,j=0;
    string newstr="";
    while(i<N){
        while(i<N&&str[i]=='.'){
            i++;
        }
        j=i;
        while(j<N&&str[j]!='.'){
            j++;
        }
        if(i<j){
            string w= str.substr(i,j-i);
            if (newstr.empty()) {
                newstr = w; // Don't add leading period
            } else {
                newstr = w + "." + newstr;
            }
        }
        i=j+1;
    }
    cout<<newstr<<endl;
    return 0;
}