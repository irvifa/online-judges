#include <bits/stdc++.h>
using namespace std;

string S;
int main(){
    cin >> S;
    try {
        cout << stoi(S) << endl;
    } catch (exception error) {
        cout << "Bad String" << endl;
    }
    return 0;
}
