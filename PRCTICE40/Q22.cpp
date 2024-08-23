#include<iostream>
using namespace std;

int main(){
    int r,c,tr;
    cin>>r>>c>>tr;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int low=0;
    int right=r*c-1;
    while(low<=right){
        int mid= low+(right-low)/2;
        int ele = arr[mid/c][mid%c];
        if(ele==tr){
            cout<<"yes"<<endl;
            return 0;
        }else if(ele>tr){
            right=mid-1;
        }else{
            low=mid+1;
        }
    }

    cout<<"No"<<endl;
    return 0;
}