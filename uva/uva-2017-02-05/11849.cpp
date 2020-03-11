#include <bits/stdc++.h>
using namespace std;

int solve(const set<int> &a, const set<int> &b) {
    int ret;
    ret = 0;
    for (auto &e : a)
        if (b.find(e) != b.end())
            ++ret;
    return ret;
}

int n, m, t;
set<int> f, s;
int main() {
    while (scanf("%d %d", &n, &m), n, m) {
        while (n--) {
            scanf("%d", &t);
            f.insert(t);
        }
        
        while (m--) {
            scanf("%d", &t);
            s.insert(t);
        }
        
        if (f.size() < s.size()) 
        	printf("%d\n",solve(f, s));
        else 
        	printf("%d\n",solve(s, f));
        
        f.clear(), s.clear();
    }
    return 0;
}
