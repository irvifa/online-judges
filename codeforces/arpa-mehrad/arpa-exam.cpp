#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
	if(n==0) {
		puts("1");
	} else {
		n--;
		n%=4;
		if(n==0) puts("8");
		else if(n==1) puts("4");
		else if(n==2) puts("2");
		else puts("6");
	}
}

// adhoc
int n;
int main() {
	scanf("%d",&n);
	solve(n);	
	return 0;
}
