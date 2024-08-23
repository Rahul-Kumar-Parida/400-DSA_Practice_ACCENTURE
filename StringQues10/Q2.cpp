#include <iostream>
#include <string>
using namespace std;

int main()
{
    string m;
    cin >> m;

    if (m == "rock")
    {
        cout << "paper" << endl;
    }
    else if (m == "paper")
    {
        cout << "Scissors" << endl;
    }
    else if (m == "Scissors")
    {
        cout << "rock" << endl;
    }else{
        cout<<"Not Valid"<<endl;
    }

    return 0;
}