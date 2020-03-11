#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int N = 5;

int main(){
	int a[N];
	int i;
	ll min, max;
	for(i = 0; i < N; i++) scanf("%d",&a[i]);
	sort(a, a + N);
	min = 0, max = 0;
	for(i = 0; i < N; i++) {
		if(i < N-1) min += a[i];
		if(i > 0) max += a[i];
	}
	printf("%I64d %I64d\n", min, max);
	return 0;
}

