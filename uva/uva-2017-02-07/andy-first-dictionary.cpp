#include<bits/stdc++.h>
using namespace std;

bool is_lower(char c) {
    return c >= 'a' && c <= 'z';
}

string s, curr;
set<string> st;
int l, i;
char c;
int main() {
    while (cin >> s) {
        l = s.size();
        
        curr = "";
        for (auto &e: s) {
            c = tolower(e);
            if (is_lower(c)) {
                curr += c;
            } else if (curr != "") {
                st.insert(curr);
                curr = "";
            }
        }
        if (curr != "")
            st.insert(curr);
    }
    
    for (auto &e: st)
        cout << e << '\n';
}
