#include <bits/stdc++.h>
using namespace std;

int maximumXor(int l, int r) {
	int q = l^r, a =1;
	while(q) {
		q/=2;
		a<<=1;
	}
	a--; return a--;
}

int l, r;
int main() {
	scanf("%d",&l);
	scanf("%d",&r);
	printf("%d\n",maximumXor(l,r));
	return 0;
}