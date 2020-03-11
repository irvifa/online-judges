#include <bits/stdc++.h>
using namespace std;

map<int, int> m;
vector< pair<int, int> > v;
int n;
int main() {
	while(~scanf("%d",&n)) {
		map<int, int>::iterator it = m.find(n);	
		if(it != m.end()) {
			it->second++;
		} else {
			m.insert(make_pair(n, 1));
		}
	}

	for(auto &e : m) {
		v.push_back(make_pair(e.second,e.first));
	}

	sort(v.begin(), v.end());

	printf("%d\n",v[v.size()-1].second);

	return 0;
}