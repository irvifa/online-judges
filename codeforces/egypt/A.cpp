#include <bits/stdc++.h>
using namespace std;

int t, g, b, n, ans, shift;
int main() {
	freopen("powers.in", "r", stdin);
	scanf("%d", &t);
	while (t--) {
    	ans = 0;
    	scanf("%d", &g);
    	while (g--) {
      		scanf("%d %d", &b, &n);
			if (b % 2) {
				shift = n % 2;
			} else {
				n %= b + 1;
				if(n == b) shift = 2;
				else shift = n % 2;
			}
			ans ^= shift;
    	}
    
    	if(ans) puts("1");
    	else puts("2");
    }
	return 0;
}
