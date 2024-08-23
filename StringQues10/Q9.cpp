#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int current=0;
    int maxspace=0;
    for(char ch:arr){
        if(ch=='S'){
            current++;
            maxspace=max(maxspace, current);
        }else{
            current=0;
        }
    }

    cout<<maxspace<<endl;

    return 0;
}