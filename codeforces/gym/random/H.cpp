#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e3+7;

int a[maxn];
int memo[maxn][maxn];

int solve(int x,int y) {
    
    if(memo[x][y] != 0) return memo[x][y];
    
    if(y - x == 1)
        return memo[x][y] = abs(a[x] - a[y]);
    
    int max1,max2;
    
    if(a[x + 1] >= a[y])
        max1 = solve(x + 2,y) + a[x] - a[x + 1];
    else
        max1 = solve(x + 1,y - 1) + a[x] - a[y];
    
    if(a[x] < a[y - 1])
        max2 = solve(x,y - 2) + a[y] - a[y - 1];
    else
        max2 = solve(x + 1,y - 1) + a[y] - a[x];
    
    return memo[x][y] = max(max1,max2);
}

int N, t, i;
int main() {
    t = 0;
    while(scanf("%d",&N) && N) {
        for(i = 1; i <= N; i++) scanf("%d",&a[i]);
        
        memset(memo,0,sizeof(memo));
        printf("In game %d, the greedy strategy might lose by as many as %d points.\n",++t,solve(1,N));
    }
    return 0;
}
