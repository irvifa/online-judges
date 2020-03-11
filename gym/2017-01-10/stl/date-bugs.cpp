#include<bits/stdc++.h>
using namespace std;

const int N = 10e3;
const int Z = 20;

int n, tc, i, ans;
int main() {
    tc = 0;
    while(scanf("%d", &n), n) {
        int d[Z], y[Z], a[Z], b[Z];
        ans = 0;
        for(i = 0; i < n; i++) {
            scanf("%d %d %d", &y[i], &a[i], &b[i]);
            d[i] = b[i]-a[i];
            if(y[i] > ans) ans = y[i];
        }
        for(; ans < N; ans++) {
            for(i = 0; i < n; i++) {
                if((ans - y[i]) % d[i] != 0)break;
            }
            if(i == n) break;
        }
        printf("Case #%d:\n", ++tc);
        if(ans == N)
            puts("Unknown bugs detected.\n");
        else
            printf("The actual year is %d.\n\n", ans);
    }
    return 0;
}
