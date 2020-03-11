#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
  return a.first < b.first;
}

int n, k, i, ans, j;
vector<int> v;
vector<pair<int,int>> c;
int main() {
	cin >> n >> k;
	ans = 0;
	v.resize(n);
	c.resize(n);
	for(i=0; i<n; i++)
		cin >> v[i];
	
	sort(v.begin(),v.end());
	
	for(i=0; i<n-1;i++)
		c[i] = make_pair(v[i+1]-v[i],i+1);
	
	sort(c.begin(),c.end(),cmp);
	
	if(c[1].first==c[n-1].first) {
		for(i=0; i<n; i+=2*k) 
			ans++;	
	} else {
		bitset<8> b;
		for(auto&& p: c) {
			if(!b.all()) {
				int r = min(p.second+k,n);
				int l = max(p.second-k,0);
				//cout << l << "l" << r << "r" << endl;
				ans++;
				for(j=l; j<r; j++) {
					b.set(j);
				}
			} else 
				break;
			//cout << p.second << "nyampah" << endl;
		}
	}
	ans--;
	cout << ans << endl;
	return 0;
}
