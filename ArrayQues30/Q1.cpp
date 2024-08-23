#include<iostream>
#include<climits> 
using namespace std;

// int main(){
//     int arr[]={8,10,6,2,9,7,5};
//     int n=7;
//     int count =0;
//     for(int i=0;i<n;i++){
//         bool check=false;
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 check=true;
//             }else{
//                 break;
//             }
//         }
//         if(check){
//             count++;
//         }
//     }
//     cout<<count<<endl;
//     return 0;
// }



//Another method

int main(){
    int arr[]={8,10,6,2,9,7,5};
    int n=7;
    int count=0;
    int sup = INT_MIN;

    for(int i=n-1;i>=0;i--){
        if(arr[i]>sup){
            count++;
            sup=arr[i];
        }
    }

    cout<< count<<endl;

    return 0;
}