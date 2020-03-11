#include <bits/stdc++.h>
using namespace std;

const int N = 25000;
int a[N];
int i, n, j;
int main() {
	i = 0;
	while(~scanf("%d",&n)) {
		a[i] = n;
		i++;
	}
	
	for(j = i-1; j>=0; j--)
		printf("%d\n", a[j]);

	return 0;
}