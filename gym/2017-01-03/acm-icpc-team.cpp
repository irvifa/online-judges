#include <bits/stdc++.h>
using namespace std;

int n, m, i, j, k;
int prob, team, tprob;
vector<string> v;
int main() {
	scanf("%d %d", &n, &m);
	v.resize(n);
	for(i = 0; i < n; i++) {
		cin >> v[i];
	}

	prob = 0, team = 0;
	for(i = 0; i < n; i++) {
		for(j = i + 1; j < n; j++) {
			tprob = 0;
			for(k = 0; k < m; k++) {
				int x, y;
				x = v[i][k]-'0';
				y = v[j][k]-'0';
				if(x|y) tprob++;
			}
			if(tprob == prob) team++;
			else if (tprob > prob) {
				prob = tprob;
				team = 1;
			}
		}
	}

	printf("%d\n", prob);
	printf("%d\n", team);
	return 0;	
}