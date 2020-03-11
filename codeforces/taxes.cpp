#include<bits/stdc++.h>
using namespace std;

bool is_prime(int x) {
	int i;
	for(i=2; i*i<=x; i++)
		if(x%i==0) return false;
	return true;
}

int n;
int main() {
	scanf("%d",&n);
	if(n==2) {
		puts("1");
		return 0;
	}
	if(n%2==0) {
		puts("2");
		return 0;
	}
	if(is_prime(n)) {
		puts("1");
		return 0;
	}
	if(is_prime(n-2)) {
		puts("2");
		return 0;
	} else {
		puts("3");
	}
	return 0;
}
