#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {5, 2, 4, 1, 3,0};
    int n = 6;
    int min = INT_MAX;
    int index=0;
    for (int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            index=i;
        }
    }

    cout<< min <<" "<<index;

    return 0;
}