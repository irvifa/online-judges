#include<bits/stdc++.h>
using namespace std;

const int N = 10;
const int M = 100;
int vertice_edge[N][M], g[N][N];
int n, m, i, j;
int tc, flag, x, y, cnt;
int main() {
    scanf("%d", &tc);
    while(tc--) {
        scanf("%d %d", &n, &m);
        for(i = 0; i < n; i++)
            for(j = 0; j < m; j++)
                scanf("%d", &vertice_edge[i][j]);
        flag = 0;
		memset(g, 0, sizeof(g[0][0])*N*N);        
		for(i = 0; i < m && !flag; i++) {
            cnt = 0;
            for(j = 0; j < n; j++) {
                if(vertice_edge[j][i]) {
                    if(cnt == 0)    x = j;
                    else            y = j;
                    cnt++;
                }
            }
            if(cnt != 2)    flag = 1;
            else {
                if(g[x][y]) flag = 1;
                g[x][y] = g[y][x] = 1;
            }
        }
        puts(flag ? "No" : "Yes");
    }
    return 0;
}
