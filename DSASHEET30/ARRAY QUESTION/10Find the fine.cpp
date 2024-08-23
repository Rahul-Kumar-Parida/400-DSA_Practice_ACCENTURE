#include<iostream>
using namespace std;
int main(){
    int date,n;
    cin>>date>>n;
    int car[n];
    for(int i=0;i<n;i++){
        cin>>car[i];
    }
    int fine[n];
    for(int i=0;i<n;i++){
        cin>>fine[i];
    }
    int sum=0;
    if(date%2==0){
        for(int i=0;i<n;i++)
        {
            if(car[i]%2==1){
                sum+=fine[i];
            }
        }
    }
    else{
        for(int i=0;i<n;i++)
        {
            if(car[i]%2==0){
                sum+=fine[i];
            }
        }
    }
    

    cout<<sum<<endl;
    return 0;
}