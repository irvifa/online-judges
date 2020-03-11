#include <bits/stdc++.h>
using namespace std;

const int N = 100;

char a[N], f[N];
int dp[N][N], l[N][N];

void solve(int i, int j) {
    if(i == 0 && j == 0)    return;
    if(l[i][j] == 1)
        solve(i-1, j-1);
    else if(l[i][j] == 2) {
        solve(i-1, j);
        printf("D%c%02d", a[i-1], j+1);
    }
    else if(l[i][j] == 3) {
        solve(i, j-1);
        printf("I%c%02d", f[j-1], j);
    } else {
        solve(i-1, j-1);
        printf("C%c%02d", f[j-1], j);
    }

}

int i, j;
int main() {
    while(scanf("%s %s", a, f) == 2) {
        memset(dp, 63, sizeof(dp));
        int la = strlen(a), lf = strlen(f);
        dp[0][0] = 0;
        for(i = 0; i <= la; i++) {
            for(j = 0; j <= lf; j++) {
                if(a[i] == f[j] && dp[i+1][j+1] > dp[i][j]) // copy
                    dp[i+1][j+1] = dp[i][j], l[i+1][j+1] = 1;
                if(dp[i+1][j] > dp[i][j]+1) // del
                    dp[i+1][j] = dp[i][j]+1, l[i+1][j] = 2;
                if(dp[i][j+1] > dp[i][j]+1) // ins
                    dp[i][j+1] = dp[i][j]+1, l[i][j+1] = 3;
                if(dp[i+1][j+1] > dp[i][j]+1) // change
                    dp[i+1][j+1] = dp[i][j]+1, l[i+1][j+1] = 4;
            }
        }
        solve(la, lf);
        puts("E");
    }
    return 0;
}
