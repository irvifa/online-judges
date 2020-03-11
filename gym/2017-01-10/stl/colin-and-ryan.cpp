#include<bits/stdc++.h>
using namespace std;

int n, tc;
int c, r, s, i, d;
int main() {
	tc = 0;
	scanf("%d", &n);
	while(n--) {
		scanf("%d %d",&c,&r);
		set<int> res;
		
		d = c - r;
		printf("Case #%d:",++tc);
		
		if(d == 0) {
			puts(" 0");
			continue;
		}
		
		for(i = 1; i * i <= d; ++i) {
			if (d % i == 0) {
				res.insert(d / i);
				res.insert(i);
			}
		}
		
		for(auto e : res)
			if (e > r) printf(" %d", e);
		puts("");
	}
	return 0;
}
