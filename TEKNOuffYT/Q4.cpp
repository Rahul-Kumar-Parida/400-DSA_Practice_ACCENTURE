#include<iostream>
using namespace std;
// int main(){
//     string str;
//     cin>>str;
//     int i=0;
//     int n=str.length()-1;
//     string newstr="";
//     while(i<n){
//         while(i<n&&str[i]=='0'){
//             i++;
//         }
//         int start=i;
//         while(i<n&&str[i]!='0'){
//             i++;
//         }
//         int length= i-start;
//         if(length>0){
//             newstr+='A'+length-1;
//         }
//     }

//     cout<<newstr<<endl;
//     return 0;
// }


//m-2

int main(){
    string str;
    cin>>str;
    int n=str.length();
    string newstr="";
    int count=0;
    for(int i=0;i<n;i++){
        if(str[i]=='1'){
            count++;
        }else{
            if(count>0){
                newstr+='A'+count-1;
                count=0;
            }
        }
    }

    cout<<newstr<<endl;
    return 0;
}