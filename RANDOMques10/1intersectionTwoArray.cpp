#include<bits/stdc++.h>
using namespace std;


//Method 1
vector<int> intersectionArray(vector<int>arr1, vector<int>arr2){
    int i=0,j=0;
    vector<int>ans;
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    while(i<arr1.size()&&j<arr2.size()){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }else if(arr1[i]<arr2[j]){
            i++;
        }else{
            j++;
        }
    }
    return ans;
}

vector<int> intersectionArray1(vector<int>arr1, vector<int>arr2){
    unordered_map<int,int>ans;
    vector<int>res;
    for(int num:arr1){
        ans[num]++;
    }
    for(int num:arr2){
        if(ans[num]>0){
            res.push_back(num);
            ans[num]=0;
        }
    }

    return res;
}


int main(){
    vector<int> arr1 ={1,2,3,4,4,5};
    vector<int> arr2 ={1,2,9,4,6,8};
    vector<int> result = intersectionArray1(arr1,arr2);

    for(int num:result){
        cout<<num<<" ";
    }
    return 0;
}