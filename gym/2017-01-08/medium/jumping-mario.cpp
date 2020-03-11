#include<bits/stdc++.h>
using namespace std;

int n, t, i, tc;
int lo, hi, a;
int main() {
	tc = 0;
	scanf("%d", &n);
	while(n--) {
		scanf("%d", &t);
		vector<int> v;
		v.resize(t);
		lo = 0, hi = 0;
		for(i = 0; i < t; i++) {
			scanf("%d", &v[i]);
		}
		a = v[0];
		for(i = 1; i < t; i++) {
			if(a > v[i]) lo++;
			else if(a < v[i]) hi++;
			a = v[i];
		}
		printf("Case %d: %d %d\n", ++tc, hi, lo);
	}
	return 0;
}
