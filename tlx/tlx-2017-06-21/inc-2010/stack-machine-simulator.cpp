#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int t, n, i, j, k;
string s;
vector<char> v;
int main() {
    cin >> t;
    while(t--) {
        cin >> s;
        // cout << s << endl;
        for(i = 0; i < s.size(); i++) {
            // cout << s[i] << endl;
            if(s[i] == '+') {
                i++;
                v.push_back(s[i]);
            } else  if(s[i] == '^') {
                reverse(v.begin(), v.end());
            }
        }
        for(auto e: v) cout << e;
        cout << endl;
        v.clear();
    }
    return 0;
}