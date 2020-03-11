#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int n, t, a;
ll ans;
int main() {
	while(scanf("%d", &n), n) {
		multiset<int> m;
		ans = 0;
		while(n--) {
			scanf("%d", &t);
			while(t--) {
				scanf("%d", &a);
				m.insert(a);
			}
			ans += (*m.rbegin() - *m.begin());
			m.erase(--m.end());
			m.erase(m.begin());
		}
		printf("%lld\n", ans);
	}
	return 0;
}
