#include<iostream>
#include<sstream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ostringstream oss;
    
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            oss<< "Even";
        }else{
            oss<< "Odd";
        }
    }
    string newStr=oss.str();
    cout<<newStr<<endl;
    return 0;
}