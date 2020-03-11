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
