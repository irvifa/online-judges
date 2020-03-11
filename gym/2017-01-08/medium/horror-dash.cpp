#include<bits/stdc++.h>
using namespace std;

int n, t, i, tc;
int main() {
	tc = 0;
	scanf("%d", &n);
	while(n--) {
		scanf("%d", &t);
		vector<int> v;
		v.resize(t);
		for(i = 0; i < t; i++) {
			scanf("%d", &v[i]);
		}
		sort(v.begin(), v.end());
		printf("Case %d: %d\n", ++tc, v[v.size()-1]);
	}
	return 0;
}
