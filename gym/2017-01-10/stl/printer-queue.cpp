#include<bits/stdc++.h>
using namespace std;

int t, n, m, x, i, j, v, idx, ans;
bool ok;    
int main() {
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &n, &m);
        queue<int> q, qi;
        vector<int> inq;
       	inq.resize(10);
        
        for(i = 0; i < n; i++) {
            scanf("%d", &x);
            q.push(x), qi.push(i);
            inq[x]++;
        }
        
        ans = 0;
        while(1) {
            v = q.front();
            idx = qi.front();
            q.pop();
            qi.pop();

            ok = true;
            for(i = v+1; i < 10; i++)
                ok &= (inq[i] == 0);
            if(ok) {
                ans++;
                if(idx == m) {
                    printf("%d\n", ans);
                    break;
                }
                inq[v]--;
            } else {
                q.push(v);
                qi.push(idx);
            }
        }
    }
    return 0;
}
