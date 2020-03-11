#include<bits/stdc++.h>
using namespace std;

const int N = 100;

int dp[N][N], l[N][N];
int lx, ly;
char a[N], f[N];
int step, cont = 0;

void solve(int i, int j) {
    if(i == 0 && j == 0)
        return;
    if(l[i][j] == -1) {
        solve(i-1, j-1);
    } else if(l[i][j] == -2) {
        solve(i-1, j-1);
        printf("%d Replace %d,%c\n", ++step, i-cont, f[j-1]);
    } else if(l[i][j] == -3) {
        solve(i-1, j);
        printf("%d Delete %d\n", ++step, i-cont);
        cont++;
    } else if(l[i][j] == -4) {
        solve(i, j-1);
        cont--;
        printf("%d Insert %d,%c\n", ++step, i-cont, f[j-1]);
    }
}

int main() {
    int i, j, first = 0;
    while(gets(a)) {
        gets(f);
        if(first)
            puts("");
        first = 1;
        lx = strlen(a), ly = strlen(f);
        for(i = 0; i <= lx; i++) {
            for(j = 0; j <= ly; j++) {
                dp[i][j] = 0xffff;
            }
        }
        dp[0][0] = 0;
        int cost[4] = {0,1,1,1};
        for(i = 0; i <= lx; i++) {
            for(j = 0; j <= ly; j++) {
                if(a[i] == f[j]) {
                    dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j]+cost[0]);
                    if(dp[i+1][j+1] == dp[i][j]+cost[0])
                        l[i+1][j+1] = -1;
                }
                if(a[i] != f[j]) {
                    dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j]+cost[1]);
                    if(dp[i+1][j+1] == dp[i][j]+cost[1])
                        l[i+1][j+1] = -2;
                }
                dp[i+1][j] = min(dp[i+1][j], dp[i][j]+cost[2]);
                if(dp[i+1][j] == dp[i][j]+cost[2])
                    l[i+1][j] = -3;
                dp[i][j+1] = min(dp[i][j+1], dp[i][j]+cost[3]);
                if(dp[i][j+1] == dp[i][j]+cost[3])
                    l[i][j+1] = -4;
            }
        }
        printf("%d\n", dp[lx][ly]);
        step = cont = 0;
        solve(lx, ly);
    }
    return 0;
}
