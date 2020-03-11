#include <bits/stdc++.h>
using namespace std;

int n, i, t, ans, sum, j;
int main() {
	i = 0;
	while (scanf("%d", &n), n) {
		sum = 0;
		for (j = 0; j < n; j++) {
			scanf("%d", &t);
			if (t > 0) sum++;
			else sum--;
		}
		printf("Case %d: %d\n", ++i, sum);
	}
	return 0;
}
