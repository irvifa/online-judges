#include <bits/stdc++.h>
using namespace std;

const int N = 111;
int n, q;
int nxt[N];

int solve(int t, int k, int d) {
    vector<int> v;
    int i, ans;
    for(i = 0; i < n; i++)
        if (nxt[i] < t)
            v.push_back(i);
        
    if(v.size() < k) return -1;
    
    ans = 0;
    for(i = 0; i < k; i++) {
        ans += v[i] + 1;
        nxt[v[i]] = t + d - 1;
    }
    return ans;
}


int t, k, d;
int main(){
    scanf("%d %d", &n, &q);
    while (q--) {
        scanf("%d %d %d", &t, &k, &d);
        printf("%d\n", solve(t, k, d));
    }
    return 0;
}
