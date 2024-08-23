// Palendrome Check
#include <iostream>
#include <string>
using namespace std;

// int main(){
//     string s= "racecar";
//     string p(s.length(), ' ');
//     int j=0;
//     for (int  i = s.length()-1; i >=0 ; i--)
//     {
//         p[j] = s[i];
//         j++;
//     }

//     if(s==p){
//         cout<<"Palendrome"<<endl;
//     }else{
//         cout<<"Not Palendrome"<<endl;
//     }

//     return 0;
// }

// another method

int main()
{
    string s = "racecare";
    bool ispalendrome = true;
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            ispalendrome = false;
            break;
        }
    }
    if (ispalendrome)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}