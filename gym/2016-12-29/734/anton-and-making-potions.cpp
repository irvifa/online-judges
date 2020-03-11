#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int MAX = 1000000;

int a[MAX], b[MAX], c[MAX], d[MAX];

int completed(int available_money, int k) {
	int l, r, m;
	l = 0, r = k;
	while (l < r) {
		m = (l + r + 1) / 2;
		if (d[m] <= available_money) l = m; 
		else r = m-1;
	}
	return c[l];
}

int n, m, k;
int x, s;
int i, available_money;
ll ans;
int main() {
    scanf("%d %d %d",&n,&m,&k);
	scanf("%d %d",&x,&s);
	
	a[0] = x;
	b[0] = 0;
	c[0] = 0;
	d[0] = 0;
	for (i = 1; i <= m; i++) scanf("%d",&a[i]);
	for (i = 1; i <= m; i++) scanf("%d",&b[i]);
	for (i = 1; i <= k; i++) scanf("%d",&c[i]);
	for (i = 1; i <= k; i++) scanf("%d",&d[i]);
	
	ans = 1LL * n * x;
	for (i = 0; i <= m; i++) {
		available_money = s - b[i];
		if (available_money < 0) continue;
		ans = min(ans, 1LL * (n - completed(available_money, k)) * a[i]);
	
	}
	
	cout << ans << endl;
	return 0;
}
