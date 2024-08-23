#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ans;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   

    for(int i=0;i<n;i++){
        bool check=false;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                ans.push_back(arr[j]);
                check = true;
                break;
            }
        }
        if(!check){
            ans.push_back(-1);
        }
        
    }

    for(int ch:ans){
        cout<<ch<<" ";
    }

    return 0;
}