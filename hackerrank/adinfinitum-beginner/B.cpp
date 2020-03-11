#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int MOD = 1000000009;
ll rusianpeasant(ll a,ll b) {
    if (M <= MOD) return a * b % M;
 
    ll res = 0;
    while (a > 0) {
        if (a & 1) {
            res += b;
            if (res >= M) res -= M;
        }
        a >>= 1;
        b <<= 1;
        if (b >= M) b -= M;
    }
    return res;
}

int q, a, b, k, m;
int main() {
	scanf("%d %d",&a,&b);
	printf("%d\n",rusianpeasant(a,b));
	return 0;
}