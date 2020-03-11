#include <bits/stdc++.h>
using namespace std;

struct Fenwick {
	vector<int> f;
	Fenwick(int n) : f(n) {}
	
	void update(int k, int v) {
		for(k++; k<f.size(); k+= k & -k)
			f[k] ^= v;
	}
	
	int query(int k) {
		int res = 0;
		for(k++; k>0; k-= k & -k)
			res ^= f[k];
		return res;
	}
};

int n, q, i;
int main() {
	scanf("%d",&n);

	vector<int> a(n);
	for (i = 0; i < n; i++) 
		scanf("%d", &a[i]);

	vector<int> sum(n + 1);
	for (i = 0; i < n; i++) 
		sum[i + 1] = sum[i] ^ a[i];

	scanf("%d",&q);

	vector<int> l(q), r(q);
	vector<vector<int>> bucket(n + 1);
	for (i = 0; i < q; i++) {
		scanf("%d %d", &l[i], &r[i]);
		l[i]--;
		r[i]--;
		bucket[r[i]].push_back(i);
	}

	vector<int> ans(q);
	map<int, int> pos;
	Fenwick f(n + 10);
	for (i = 0; i < n; i++) {
		if (pos.count(a[i])) {
			f.update(pos[a[i]], a[i]);
		}
		pos[a[i]] = i;
		f.update(pos[a[i]], a[i]);

		for (int j : bucket[i]) {
			ans[j] = f.query(r[j]) ^ f.query(l[j] - 1) ^ sum[r[j] + 1] ^ sum[l[j]];
		}
	}

	for (i = 0; i < q; i++) {
		printf("%d\n", ans[i]);
	}
	return 0;
}
