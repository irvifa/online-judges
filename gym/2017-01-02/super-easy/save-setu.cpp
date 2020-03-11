#include <bits/stdc++.h>
using namespace std;

int t, n, ans;
string s;
int main() {
	scanf("%d", &t);
	ans = 0;
	while(t--) {
		cin >> s;
		if(s=="donate") {
			scanf("%d", &n);
			ans += n;
		} else printf("%d\n", ans);
	}
	return 0;
}
