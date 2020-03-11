#include <bits/stdc++.h>
using namespace std;

const int N = 100005;
const int INF = 0x3f3f3f3f;
vector< pair<int,int> > e[N];
bool vis[N];
int n, m, k, i, j, ans;
int u, v, l, idx;
int main() {
    scanf("%d %d %d", &n, &m, &k);
    for(i = 1; i <= m; i++) {
        scanf("%d %d %d", &u, &v, &l);
        e[u].push_back(make_pair(v, l));
        e[v].push_back(make_pair(u, l));
    }
    
    for(i = 1; i <= k; i++) {
        scanf("%d", &idx);
        vis[idx] = true;
    }
    
    ans = INF;
    for(i = 1; i <= n; i++) {
    	if(!vis[i]) continue;
    	for(j = 0; j < e[i].size(); j++) {
    		if(!vis[e[i][j].first])
    			ans = min(ans,e[i][j].second);
    	}
    }
    
    if(ans < INF) printf("%d", ans);
    else puts("-1");
    
    return 0;
}

