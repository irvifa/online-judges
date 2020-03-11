#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

const int SIZE = 1e5 + 10;
const ll INF = 10e15;

vector< pll > G[SIZE];
priority_queue< pll, vector< pll >, greater < pll > > pq;
ll dis[SIZE], parent[SIZE], path[SIZE];

void dijkstra(ll start);

int i, j, n, m, u, v, w, p, child;

int main(){
	scanf("%d %d", &n, &m);

	for(i = 0; i <= n; i++)
		dis[i] = INF;

	for(i = 0; i < m; i++) {
		scanf("%d %d %d", &u, &v, &w);
		G[u].push_back(pll(v, w));
		G[v].push_back(pll(u, w));
	}

	dijkstra(1);

	if(dis[n] == INF) {
		printf("-1\n");
		return 0;
	}

	child = n;
	i = 1;
	while(1) {
		p = parent[child];
		path[i] = p;

		if(p == 1) break;

		child = p;
		i++;
	}
	
	path[0] = n;
	for(j = i; j >= 0; j--) printf("%I64d ", path[j]);

	return 0;
}


void dijkstra(ll start) {
	memset(parent, -1, sizeof(parent));
	
	ll i, u, v, costUV;
	
	pq.push(pll(0, start));
	dis[start] = 0;
	parent[start] = 1;

	pll tmp;
	while (!pq.empty()){
		tmp = pq.top();
		u = tmp.second;
		pq.pop();

		for (i = 0; i < G[u].size(); i++) {
			v = G[u][i].first;
			costUV = G[u][i].second;

			if (dis[u] + costUV < dis[v]) {
				parent[v] = u;
				dis[v] = dis[u] + costUV;
				pq.push(pll(dis[v], v));
			}
		}
	}
}



