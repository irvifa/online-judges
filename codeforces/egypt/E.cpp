#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
const int INF = 2e9;

vector<int> edge[N];
int dist[N], a[N];

int t, n, i, curr;
int main() {
  freopen("jumping.in", "r", stdin); 
  scanf("%d", &t);
  while (t--) {
    for (i = 0; i < N; i++)
    	edge[i].clear();
    
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
      scanf("%d", &a[i]);
      if (i + a[i] <= n) 
        edge[i + a[i]].push_back(i);
      
      if (i - a[i] >= 1) 
        edge[i - a[i]].push_back(i);
    }
    
    fill(dist, dist + N, INF);
    queue<int> q;
    q.push(n);
    dist[n] = 0;
    
    while (!q.empty()) {
      curr = q.front();
      q.pop();
      for (auto it : edge[curr]) {
        if (dist[curr] + 1 < dist[it]) {
          dist[it] = dist[curr] + 1;
          q.push(it);
        }
      }
    }
    
    for (i = 1; i <= n; i++) {
      if (dist[i] == INF) dist[i] = -1;
      printf("%d\n", dist[i]);
    }
    
  }

  return 0;
}
