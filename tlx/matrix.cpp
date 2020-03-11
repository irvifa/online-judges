#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAXN = 100005;
const ll inf = 1LL << 55;
int N, K;
bool bad[MAXN];
ll dp[MAXN][2];
vector<pair<int, int> > adj[MAXN];

void dfs(int u, int fa) {
    dp[u][1] = 0;
    dp[u][0] = bad[u] ? inf : 0;

    for (int i = 0; i < adj[u].size(); i++) {
        int v = adj[u][i].first, w = adj[u][i].second;

        if (v != fa) {
            dfs(v, u);
            dp[u][1] += min(dp[v][0], dp[v][1] + w);
            dp[u][1] = min(dp[u][1], dp[u][0] + dp[v][1]);

            if (!bad[u])
                dp[u][0] += min(dp[v][0], dp[v][1] + w);
        }
    }
}

int a, b, c, i, x;
ll ans;        
int main() {
    cin >> N >> K;

    for (i = 1; i < N; i++) {
        cin >> a >> b >> c;
        adj[a].push_back(make_pair(b, c)); 
        adj[b].push_back(make_pair(a, c));
    }

    memset(bad, false, sizeof(bad));

    for (i = 0; i < K; i++) {
        cin >> x;
        bad[x] = true;
    }

    dfs(0, -1);
    ans = min(dp[0][0], dp[0][1]);

    cout << ans << endl;

    return 0;
}
