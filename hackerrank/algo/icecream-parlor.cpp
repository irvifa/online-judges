#include <bits/stdc++.h>
using namespace std;

const int MAX = 10001;
vector<int> v[MAX];

int t, m, n, num, i;
int main() {
	scanf("%d",&t);
	while (t--) {
		scanf("%d",&m);
		scanf("%d",&n);
		for (i = 1; i <= 10000; i++) v[i].clear();
		for (i = 1; i <= n; i++) {
			scanf("%d",&num);
			v[num].push_back(i);
		}

		for (i = 1; i <= 10000; i++) {
			if (i != m - i) {
				if (!v[i].empty() && !v[m - i].empty()) {
					printf("%d %d\n",min(v[i][0], v[m - i][0]),max(v[i][0], v[m - i][0]));
					break;
				}
			} else {
				if (v[i].size() >= 2) {
					printf("%d %d\n",v[i][0],v[i][1]);
					break;
				}
			}
		}
	}
	return 0;
}