#include<bits/stdc++.h>
using namespace std;

int n, c, inc, tc;
int main() {
	tc = 0;
	scanf("%d", &n);
	while(n--) {
		scanf("%d %d", &c, &inc);
		printf("Case %d: %.2lf\n", ++tc, (((c*9.0/5)+32+inc)-32)*5.0/9);
	}
	return 0;
}
