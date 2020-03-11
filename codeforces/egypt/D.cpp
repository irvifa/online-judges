#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int t, n, m, i;
ll ans;
int main() {
	freopen("popcorn.in", "r", stdin); 
	scanf("%d", &t);
  	while (t--) {
    	scanf("%d %d", &n, &m);
    	ans = 1;
    	for (i = 0; i < m; i++) 
      		ans = ans * (n - i) / (i + 1); 
    	
    	printf("%I64d\n",ans);
  	}  
  	return 0;
}
