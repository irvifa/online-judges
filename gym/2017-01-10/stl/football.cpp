#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> x, pair<int, int> y) {
	return x.first - x.second > y.first - y.second;
}

int n, g, s, r;
int i, ans;
int main() {
	while(scanf("%d %d", &n, &g) == 2) {
		vector< pair<int, int> > v;
		for(i = 0; i < n; i++) {
			scanf("%d %d", &s, &r);
			v.push_back(make_pair(s, r));
		}
		
		sort(v.begin(), v.end(), cmp);
		
		ans = 0;
		for(i = 0; i < n; i++) {
			s = v[i].first, r = v[i].second;
			if(s > r)
				ans += 3;
			else if(s == r) {
				if(g) {
					ans += 3;
					g--;
				} else
					ans++;
			} else {
				if(g > r - s) {
					ans += 3;
					g -= r - s + 1;
				} else if(g == r - s) {
					ans++;
					g = 0;
				}	
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
