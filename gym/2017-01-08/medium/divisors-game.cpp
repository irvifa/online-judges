#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 3;
int dp[N], divisors[N];

void pre() {
	int i, j;
    
    for(i = 0; i <= N; i++) {
        divisors[i] = 1;
    }
    
    for (i = 2; i <= N; i++) {
        divisors[i]++;
        for (j = i + i ; j <= N; j += i)
            divisors[j]++;
    }
    
    dp[1] = 1;
    for (i = 2; i <= N; i++) {
        if (divisors[i] >= divisors[dp[i-1]])
            dp[i] = i;
        else dp[i] = dp[i-1];
    }
}

int tc, n;
main() {
    pre();
    scanf("%d", &tc);
    while(tc--) {
        scanf("%d", &n);
        printf("%d\n", dp[n]);
    }
    return 0;
}
