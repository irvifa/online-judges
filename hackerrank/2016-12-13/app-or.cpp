#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, s, t, m, n;
	int app, orr, d;
	int cnta, cntb;
	scanf("%d %d", &s, &t);
	scanf("%d %d", &a, &b);
	scanf("%d %d", &m, &n);
	cnta = 0, cntb = 0;
	while(m--) {
		scanf("%d",&app);
		d = a + app;
		if(d >= s && d <= t) cnta++;
	}
	while(n--) {
		scanf("%d",&orr);
		d = b + orr;
		if(d >= s && d <= t) cntb++;
	} 
	printf("%d\n", cnta);
	printf("%d\n", cntb);
	return 0;
}

