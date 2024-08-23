#include<iostream>
#include<unordered_map>

using namespace std;

// int main(){
//     int arr[]={1,2,2,3,3,3,3,4};
//     int size= sizeof(arr)/sizeof(arr[0]);
//     unordered_map<int,int> map;

//     for(int i=0;i<size;i++){
//         map[arr[i]]++;
//     }

//     for(auto res:map){
//         if(res.first==3){
//             cout<<res.second<<endl;
//         }
        
//     }

//     return 0;
// }


//method 2

int main(){
    int arr[]={1,2,2,3,3,3,3,4};
    int size= sizeof(arr)/sizeof(arr[0]);

    int current = arr[0];
    int count =1;
    for(int i=1;i<size;i++){
        if(arr[i]==current){
            count++;
        }else{
            cout<<current << ": " <<count<<endl;
            current=arr[i];
            count=1;
        }
    }
    cout<<current << " :" <<count<<" ";

    return 0;
}