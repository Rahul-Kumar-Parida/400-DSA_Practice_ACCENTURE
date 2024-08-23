#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=-1;
    int end=-1;
    int sum=0;
    int st=0;
    int max=INT_MIN;
    for(int i=1;i<n;i++){
        if(sum==0){
            st=i;
        }
        sum+=arr[i];
        if(sum>max){
            max=sum;
            start=st;
            end=i;
        }
        if(sum<0){
            sum=0;
        }
    }

    cout<<max<<endl;
    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}