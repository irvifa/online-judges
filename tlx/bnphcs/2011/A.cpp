#include<bits/stdc++.h>
using namespace std;

int t, n;
int tot, hid, ans;
int main() {
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		tot = pow(n, 3);
		hid = pow(n-2, 3);
		ans = tot - hid;
		printf("%d\n", ans);
	}
	return 0;
}
