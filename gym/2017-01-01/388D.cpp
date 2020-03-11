#include <bits/stdc++.h>
using namespace std;

const int N = 1 << 18;
int mx[N * 2];

void update(int k, int v) {
    k += N;
    mx[k] = v;
    while (k > 1) {
        mx[k >> 1] = max(mx[k], mx[k ^ 1]);
        k >>= 1;
    }
}

int n, q, i;
int a, b, k;            
map<int, int> m;
int main() {
    scanf("%d",&n);
    vector<vector<int>> v;
    v.resize(n);
    for (i = 0; i < n; i++) {
        v[i].push_back(0);
    }
    for (i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        a--;
        v[a].push_back(b);
        m[b] = a;
        update(a, b);
    }

    scanf("%d",&q);
    while (q--) {
        scanf("%d", &k);
        vector<int> ls;
        ls.resize(k);
        for (i = 0; i < k; i++) {
            scanf("%d", &ls[i]);
            ls[i]--;
        }
        
        for (int e : ls) {
            update(e, 0);
        }

        if (mx[1] == 0) {
            printf("0 0\n");
        } else {
            int id = m[mx[1]];
            update(id, 0);

            int ans = *upper_bound(v[id].begin(), v[id].end(), mx[1]);

            printf("%d %d\n", id + 1, ans);
            update(id, v[id].back());
        }

        for (int e : ls) {
            update(e, v[e].back());
        }
    }
    return 0;
}
