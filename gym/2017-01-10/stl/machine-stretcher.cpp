#include<bits/stdc++.h>
using namespace std;

int n, i, ans, mi, cnt;
string s;
int main() {  
    while(getline(cin, s), s != "0") {
        istringstream(s) >> n;
        vector<string> v;
        for(i = 0; i < n; ++i) {
            getline(cin, s);
            v.push_back(s);
        }
        
        ans = 0, mi = 25;
        for (auto e: v) {
            cnt = count(e.begin(), e.end(), ' ');
            ans += cnt;
            mi = min(mi, cnt);
        }
        printf("%d\n", ans - n * mi);
    }
    return 0;
}
