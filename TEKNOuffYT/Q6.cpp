#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    double area=3.14*n*n;
    double fraction=area-floor(area);
    int ans;
    if(fraction>0.5){
        ans= static_cast<int>(ceil(area));
    }else{
        ans= static_cast<int>(floor(area));
    }
    cout<<ans<<endl;
    return 0;
}