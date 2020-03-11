#include<bits/stdc++.h>
using namespace std;

map<int, pair<int, int> > m;
vector<pair<int,int> > v;
int n, i;
int main() {
	i = 0;
	while(~scanf("%d", &n)) {
		//cout << n << endl;
		if(!m.count(n)) {
			m.insert( make_pair(n, make_pair(1,i)) );
			i++;
		} else m[n].first++;
	}
	
	v.resize(i);
	//cout << m.size() << endl;
	for(auto e: m)
		v[e.second.second] = make_pair(e.first, e.second.first);
	
	for(auto e: v)
		printf("%d %d\n", e.first, e.second);
	
	return 0;
}
