#include <bits/stdc++.h>
using namespace std;

const int N= 1e7+5;

int factorial[N];

void init() {
	int i, j;
	for(i=2 ; i<=N; i++)
		if(factorial[i]==0)
			for(j=i; j<=N; j+=i)
				factorial[j]=i;
}

int getPrimeFactor(int x) {
	int ans = 0;
	while(x > 1) {
		x /= factorial[x];
		ans++;
	}
	return ans;
}

int i, n, k, t;
int main() {
	init();
	scanf("%d",&t);
	while(t--) {
		scanf("%d %d",&n,&k);
		if(getPrimeFactor(n)==k) 
			printf("Ya\n");
		else 
			printf("Tidak\n");
	}
	return 0;
}
