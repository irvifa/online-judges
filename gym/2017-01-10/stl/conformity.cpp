#include<bits/stdc++.h>
using namespace std;

const int N = 5;
int n, ma, m, ans, j, i;
string s;
vector<string> v;
int main() {
	while (cin >> n, n) {
		map<string, int> log;
		ma = -1;
		v.resize(N);
		for (i = 0; i < n; i++) {
			cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4];
			sort(v.begin(), v.end());
			
			s = "";			
			for (auto e: v)
				s += e;

			if (!log.count(s)) {
				log[s] = 1;
				ma = max(ma, 1);
			} else {
				m = log[s] + 1;
				log[s] = m;
				ma = max(ma, m);
			}
		}

		ans = 0;
		for (auto e: log) {
			if (e.second == ma)
				ans += e.second;
		}

		printf("%d\n", ans);
	}
	return 0;
}
