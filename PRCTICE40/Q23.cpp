#include <iostream>
#include <vector> // Required for vector
using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<string> str1(n);
    for (int i = 0; i < n; i++) {
        cin >> str1[i];
    }

    cin >> m;
    vector<string> str2(m);
    for (int i = 0; i < m; i++) {
        cin >> str2[i];
    }

    string S1 = "";
    string S2 = "";

    for (const string &st : str1) {
        S1 += st;
    }

    for (const string &st : str2) {
        S2 += st;
    }

    if (S1 == S2) {
        cout << "Yes" << endl; // Capitalized for consistency
    } else {
        cout << "No" << endl; // Capitalized for consistency
    }

    return 0;
}
