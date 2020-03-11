#include <bits/stdc++.h>
using namespace std;

const int N = 105;
const double INF = 1e18;

double dd[N], dist[N][N];
int h[N], w[N], d[N], k[N];
int from[N];
int t, n, L, U, i, j;
int main() {
  freopen("street.in", "r", stdin);
  scanf("%d", &t);
  while (t--) {
    fill(dd, dd + N, INF);
    
    scanf("%d %d %d", &n, &L, &U);
    
    for (i = 1; i <= n; i++) 
    	scanf("%d %d %d %d", h + i, w + i, d + i, k + i);
    
    dist[0][n + 1] = dist[n + 1][0] = L;
    
    for (i = 1; i <= n; i++) {
      dist[0][i] = dist[i][0] = d[i];
      dist[n + 1][i] = dist[i][n + 1] = L - (d[i] + h[i]);
      //assert(d[i] + h[i] <= L);
      for (j = 1; j <= n; j++) {
        if (i == j) continue;
        int dx = min(abs(d[i] + h[i] - d[j]), abs(d[j] + h[j] - d[i]));
        int dy = max(0, U - w[i] - w[j]);
        if (k[i] == k[j]) {
          dist[i][j] = dx;
        } else {
          if (d[i] > d[j] + h[j] || d[j] > d[i] + h[i])
            dist[i][j] = sqrt(1LL * dx * dx + 1LL * dy * dy);
          else
            dist[i][j] = dy;
        }
      }
    }
    
    priority_queue<pair<double, int>> pq;
    dd[0] = 0;
    pq.emplace(dd[0], 0);
    while (!pq.empty()) {
      double cost; int curr;
      tie(cost, curr) = pq.top();
      cost = -cost;
      pq.pop();
      if (abs(cost - dd[curr]) > 1e-9) continue;
      
      for (i = 0; i <= n + 1; i++) {
        double ncos = cost + dist[curr][i];
        if (ncos < dd[i]) {
          dd[i] = ncos;
          pq.emplace(-dd[i], i);
          from[i] = curr;
        }
      }
    }
    printf("%.6f\n", dd[n + 1]);
  }
  return 0;
}
