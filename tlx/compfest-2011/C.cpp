#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
	int ans = 1;
	for(int i=2;i<n;i++) {
		int tmp = 5 + i*i - 2*i +1;
		if(tmp < n) ans++;
		else break;
	}
	return ans;
}
 
int T, a, n;
int main() {
	scanf("%d",&T);
	while(T--) {
		scanf("%d",&n);
		if (n<4) 
			printf("-1\n");
		else if(n==4) 
			printf("0\n");
		else if(n==5) 
			printf("1\n");
		else
			printf("%d\n",solve(n));
	}
	return 0;
}
