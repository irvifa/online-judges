#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

const int N = 1e5+5;

vector<int> p(N);
vector<int> r(N);

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

int union_set(int i, int j) {
	int x = find_set(i);
	int y = find_set(j);
	if(!is_same_set(i,j)) {
		if(r[x] > r[y]) { r[x] += r[y]; p[y] = x; return r[x];}
		else {
			p[x] = y;
			r[y] += r[x];
			return r[y];
		}
	}
	return r[x];	
}

int main() {
    int i, t, n, m, tx, ty, sz;
    string x, y;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        m = min(2*n, 100000); 

		init(m);        
        map<string, int> afs;
        sz = 0;
        while(n--) {
            cin >> x >> y;
            tx = afs[x];
            if(tx == 0)
                afs[x] = ++sz, tx = sz;
            ty = afs[y];
            if(ty == 0)
                afs[y] = ++sz, ty = sz;
            printf("%d\n", union_set(tx,ty));
        }
    }
    return 0;
}