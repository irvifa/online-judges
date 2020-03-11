#include <bits/stdc++.h>

using namespace std;

int n, k, i;
vector<int> a, l;
vector<int> edges;
int b, e, cur, ans;
int tot, j, rem;
int main() {
    scanf("%d %d", &n, &k);
    a.resize(n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    bool flag = true;
    for(i = 0; i < n; i++) 
    	if (a[i] < 0) {
        	flag = false;
        	break;
    	}
    if (flag) {
        puts("0");
        return 0;
    }
    
    cur = 1, ans = 0;
    
    for(i = 0; i < n; i++)  {
        if (a[i] < 0) {
            if (cur == 1) {
                cur = -1;
                ++ans;
            }
            --k;
        } else {
            if (cur == -1) {
                cur = 1;
                ++ans;
            }
        }
    }
    if (k < 0) {
        puts("-1");
        return 0;
    }
    
    for (b = 0; b < n; ) {
        if (a[b] < 0) {
            ++b;
            continue;
        }
        e = b + 1;
        while (e < n && a[e] >= 0) ++e;
        
        if (b == 0 || e == n) {
            if (e == n) {
                edges.push_back(e - b);
            }
        } else {
            l.push_back(e - b);
        }
        b = e;
    }
    sort(l.begin(), l.end());
    tot = ans;
    for(j = 0; j < (1 << int(edges.size())); j++) {
        rem = k, cur = tot;
        for(i =0; i< edges.size(); i++) if (j & (1 << i)) {
            rem -= edges[i];
            --cur;
        }
        if (rem < 0) {
            continue;
        }
        for (int x : l) {
            if (rem >= x) {
                rem -= x;
                cur -= 2;
            }
        }
        ans = min(ans, cur);
    }
    
    printf("%d\n",ans);
    return 0;
}
