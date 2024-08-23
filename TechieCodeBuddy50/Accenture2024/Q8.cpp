#include <iostream>
using namespace std;
int main()
{
    float w, h;
    cin >> w >> h;

    float bmi = w / (h * h);
    if (bmi < 18)
    {
        cout << 0 << endl;
    }
    else if (bmi >= 18 && bmi < 25)
    {
        cout << 1 << endl;
    }
    else if (bmi >= 25 && bmi < 30)
    {
        cout << 2 << endl;
    }
    else if (bmi >= 30 && bmi < 40)
    {
        cout << 3 << endl;
    }
    else if (bmi >= 40)
    {
        cout << 4 << endl;
    }

    return 0;
}