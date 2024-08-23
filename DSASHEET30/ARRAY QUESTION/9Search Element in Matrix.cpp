#include<iostream>
using namespace std;
int main(){
    int r,c,target;
    cin>>r>>c>>target;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int s=0;
    int e=r*c-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        int element = arr[mid/c][mid%c];
        if(element==target){
            cout<<"yes"<<endl;
            return 0;
        }else if(element>=target){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    cout<<"no"<<endl;
    return 0;
}