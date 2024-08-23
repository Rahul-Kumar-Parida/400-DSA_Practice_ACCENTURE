#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x;
    cin >> x;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    unordered_set<int> initset;
    for(int num: arr){
        int sum = x-num;
        if(initset.find(sum)!= initset.end()){
            cout<< sum<<" "<<num<<endl;
        }
        initset.insert(num);
    }


    return 0;
}