#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int t;
ll ans;
int main() {
	scanf("%d", &t);
	while (t--) {
		scanf("%lld", &ans);
		ans = abs((((ans * 63 + 7492) * 5 - 498)/10)%10);
		printf("%lld\n", ans);
	}
	return 0;
}
