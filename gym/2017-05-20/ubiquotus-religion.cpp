#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

const int N = 1e5+5;

vector<int> p(N);
vector<int> r(N);
int afs;

void make_set(int x) {
	p[x] = x;
	r[x] = 1;
}

void init(int m) {
	int i;
	for(i = 0; i <= m; i++) make_set(i);
}

int find_set(int x) {
	return p[x] == x? x: (p[x] = find_set(p[x]));
}

bool is_same_set(int i, int j) {
	return find_set(i) == find_set(j);
}

void union_set(int i, int j) {
	int x = find_set(i);
	int y = find_set(j);
	if(!is_same_set(i,j)) {
		afs--;
		if(r[x] > r[y]) { p[y] = x;}
		else {
			p[x] = y;
		}
	}
}

int i, j, n, m, x, y;
string s;
int main() {
	i = 0;
	while(scanf("%d %d", &n, &m), (n && m)) {
		init(n);
		afs = n;
		while(m--) {
			scanf("%d %d", &x, &y);
			union_set(x,y);
		}
		
		printf("Case %d: %d\n",++i,afs);
		p.clear();
		r.clear();
	}   
    return 0;
}
