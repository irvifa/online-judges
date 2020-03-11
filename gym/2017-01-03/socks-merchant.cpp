#include <bits/stdc++.h>
using namespace std;

int n, i, m, ans;
map<int, int> s;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &m);
        if(s.find(m)==s.end()) {
            s.insert(make_pair(m,1));
        } else {
            s[m]++;
        }
    }
    ans = 0;
    for(auto e : s) {
        ans += floor(e.second/2);
    }
    printf("%d\n",ans);
    return 0;
}

