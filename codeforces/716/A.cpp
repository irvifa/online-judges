#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int MAX = 10e5 + 3;

ll arr[MAX];
int n, c, i, ans;
int main() {
	scanf("%d %d",&n,&c);
	for(i=0; i<n; i++) scanf("%I64d",&arr[i]);

	ans= 0;
	for(i=0; i<n; i++) {
		if(i==0) ans++;
		else {
			if(arr[i] - arr[i - 1] <= c) ans++;
			else ans = 1;
		}
	}
	printf("%d",ans);
	return 0;
}