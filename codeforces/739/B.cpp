#include<bits/stdc++.h>
using namespace std;

int solve(int k2, int k3, int k5, int k6){
	int a, b;
	a = min(k2, min(k5, k6));
	b = min(k3, k2 - a);
	return 32 * b + 256 * a;
}

int k2, k3, k5, k6;	
int main() {
	scanf("%d %d %d %d",&k2,&k3,&k5,&k6);
	printf("%d\n",solve(k2,k3,k5,k6));
	return 0;
}
