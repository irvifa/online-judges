#include <bits/stdc++.h>
using namespace std;

int n, m, d, k, i;
vector<vector<int> > v;	
int main() {
	while (scanf("%d %d", &n, &m) != EOF) {
		v.assign(1000000, vector<int>());

		for (i = 1; i <= n; i++) {
			scanf("%d", &d);
			v[d].push_back(i);
		}

		for (i = 0; i < m; i++) {
			scanf("%d %d", &k, &d);
			if (k - 1 < v[d].size())
				printf("%d\n", v[d][k - 1]);
			else
				puts("0");
		}
	}
	return 0;
}