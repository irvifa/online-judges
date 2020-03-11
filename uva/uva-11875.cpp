#include <bits/stdc++.h>
using namespace std;

int T, i, j;
int n, ans, m;
int main() {
	scanf("%d", &T);
	for (i=1; i<=T; i++) {
		scanf("%d", &n);
		for (j = 0; j < n; j++) {
			scanf("%d", &m);
			if (j == n / 2) ans = m;
		}
		printf("Case %d: %d\n", i, ans);
	}
	return 0;
}