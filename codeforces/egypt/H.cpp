#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;
const int SIZE = 15;

int a[SIZE][SIZE][SIZE];
int dp[SIZE][SIZE][SIZE];
int n, t, save;
int u, v, w, h;
int i, j, k;
int main() {
  freopen("commandos.in", "r", stdin); 
  scanf("%d", &t);
  while (t--) {
    memset(a, 0, sizeof(a));
    
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
      scanf("%d %d %d %d", &u, &v, &w, &h);
      a[u][v][w] += h;
    }    
    
    save = 10;
    for (i = 0; i < SIZE; i++) 
      for (j = 0; j < SIZE; j++) 
        for (k = 0; k < SIZE; k++) 
          dp[i][j][k] = -INF;
        
    dp[10][1][1] = 0;
    for (i= s; i >= 1; i--) {
      for (j = 1; j <= s; j++) {
        for (k = 1; k <= s; k++) {
          dp[i][j][k] = max(max(dp[i][j][k], dp[i + 1][j][k]), max(dp[i][j - 1][k], dp[i][j][k - 1]));
          dp[i][j][k] += a[i][j][k];
        }
      }
    }
    
    printf("%d\n", dp[1][s][s]);
  }

  return 0;
}
