#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

const int N = 5e5 + 5;
ll bit[N], sum[N];
int x[N];
vector<pair<int, int>> edge[N];
int ans[N], h[N];
ll pre[N];

void add_bit(int i, ll v, ll s) {
  for (; i < N; i |= i + 1) {
    bit[i] += v;
    sum[i] += s;
  }
}

void add(int l, int r, int val) {
  add_bit(l, val, -1LL * (l - 1) * val);
  add_bit(r + 1, -val, 1LL * r * val);
}

ll find_bit(int i) {
  int at = i;
  ll v = 0, s = 0;
  for (; i >= 0; i = (i & (i + 1)) - 1) {
    v += bit[i];
    s += sum[i];
  }
  return at * v + s;
}

ll find(int l, int r) {
  return find_bit(r) - find_bit(l - 1);
}

void dfs(int now, int bef) {
  int p = lower_bound(pre, pre + h[now] + 1, pre[h[now]] - x[now]) - pre;
  if (p < h[now]) {
    add(p, h[now] - 1, 1);
  }
  
  for (auto it : edge[now]) {
    int near = it.first;
    if (near == bef) continue;
    h[near] = h[now] + 1;
    pre[h[near]] = pre[h[now]] + it.second;
    dfs(near, now);
  }
  
  ans[now] = find(h[now], h[now]);
  add(h[now], h[now], -ans[now]);
}

int t, n, i;
int u, v, c;        
int main() {
  //freopen("car.in", "r", stdin);
  scanf("%d", &t);
  while (t--) {
    memset(bit, 0, sizeof(bit));
    memset(sum, 0, sizeof(sum));
    
    for (i = 0; i < N; i++) 
    	edge[i].clear();
    
    scanf("%d", &n);
    for (i = 1; i <= n; i++) scanf("%d", x + i);
    for (i = 1; i < n; i++) {
      scanf("%d %d %d", &u, &v, &c);
      edge[u].emplace_back(v, c);
      edge[v].emplace_back(u, c);
    }
    dfs(1, -1);
    
    for (i = 1; i <= n; i++) 
    	printf("%d ", ans[i]); 
    
    printf("\n");
  }
  return 0;
}
