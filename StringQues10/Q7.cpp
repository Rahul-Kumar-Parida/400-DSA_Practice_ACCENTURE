#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string str = "Hello, World!";

    int start = 0;
    int end = str.length() - 1;

    while (start < end)
    {
        swap(str[start],str[end]);
        start++;
        end--;
    
    }

    cout<<str<<endl;


    return 0;
}