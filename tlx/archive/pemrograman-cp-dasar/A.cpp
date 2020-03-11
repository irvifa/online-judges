//pengenalan pemrograman kompetitif
#include <bits/stdc++.h>
using namespace std;

struct val {
	string key;
	int f, s, t;
};

bool cmp(const val &a, const val &b) {
	return tie(a.t,a.s,a.f)>tie(b.t,b.s,b.f);
}

int T, N, M;
int a, b, c, i;
bool flag;
string q, tmp;
vector < val > v;
int main() {
	scanf("%d",&T);
	while(T--) {
		scanf("%d %d",&N,&M);
		cin >> q;
		for(int i =0; i<N; i++) {
			cin >> tmp >> a >> b >> c;
			v.push_back(val());
			v[i].f = a;
			v[i].s = b;
			v[i].t = c;
			v[i].key = tmp;
		}
		sort(v.begin(),v.end(),cmp);
		flag = false;
		for(int i=0; i<M;i++) {
			if (v[i].key == q) {
				flag = true; break;
			}
		}
		if(flag) cout << "YA" << endl;
		else cout << "TIDAK" << endl; 
		v.clear();
	}
	return 0;
}
