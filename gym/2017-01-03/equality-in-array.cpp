#include <bits/stdc++.h>
using namespace std;

int n, m, i;
map<int, int> s;
vector< pair<int,int> > v;
int main() {
	scanf("%d", &n);
	for(i = 0; i<n; i++) {
		scanf("%d", &m);
		if(s.find(m)==s.end()) {
            s.insert(make_pair(m,1));
        } else {
            s[m]++;
        }
	}

	for(auto e : s) {
        v.push_back(make_pair(e.second,e.first));
    }

    sort(v.begin(), v.end());
    
    printf("%d\n", (n-v[v.size()-1].first));
	return 0;
}