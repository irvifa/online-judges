#include<bits/stdc++.h>
using namespace std;

const int N = 100;
const int M = 10001;
int n, m, i, j, a, b, up;
int dp[M], A[N];
int main() {
    while(scanf("%d %d", &n, &m), n|m) {
        if(n == 0)  break;
        
        for(i = 0; i < n; i++) {
            scanf("%d.%d", &a, &b);
            a = a*100 + b, A[i] = a;
        }
        if(A[m-1] > 5000) {
            puts("100.00");
            continue;
        }
        memset(dp, 0, sizeof(dp));
        up = 10001-A[m-1]-1;
        dp[0] = 1;
        for(i = 0; i < n; i++) {
            if(i == m-1) continue;
            for(j = up-A[i]; j >= 0; j--) {
                if(dp[j])
                    dp[j+A[i]] = 1;
            }
        }
        up = 5001-A[m-1];
        while(!dp[up]) up++;
        printf("%.2lf\n", (double)A[m-1]*100/(up+A[m-1]));
    }
    return 0;
}
