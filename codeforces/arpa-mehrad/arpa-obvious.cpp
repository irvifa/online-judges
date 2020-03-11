#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int N = 10e6+5;

int arr[N];
ll n, x, t;
ll ans, idx;
int main() {
	scanf("%I64d %I64d", &n, &x);
	memset(arr, 0, sizeof(arr));
	while(n--) {
		scanf("%d", &t);
		idx = x^t;
		ans += arr[idx];
		arr[t]++;
	}
	printf("%I64d\n", ans);
	return 0;
}
