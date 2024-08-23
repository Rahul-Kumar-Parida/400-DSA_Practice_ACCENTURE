#include<iostream>
#include<set>
using namespace std;

int main(){
    int n, m;
    cin >> n;
    int arr1[n];
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    cin >> m;
    int arr2[m];  // Corrected the size from n to m
    for(int i = 0; i < m; i++){
        cin >> arr2[i];
    }

    set<int> Set;
    for(int it : arr1){
        Set.insert(it);
    }
    for(int it : arr2){
        Set.insert(it);
    }

    for(int it : Set){
        cout << it << " ";
    }

    return 0;
}
