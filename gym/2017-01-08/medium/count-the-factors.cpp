#include<bits/stdc++.h>
using namespace std;

int solve(int n) {
	int ans, i;
	ans = 0;
	if(n != 1)	ans++;
	for(i = 2; i <= sqrt(n); i++) {
		if(n%i == 0) ans++;
		while(n%i == 0) {
			n /= i;
		}
	} 
	return ans;
}

int n;
int main() {
	while(scanf("%d", &n), n) {
		printf("%d : ", n);
		printf("%d\n", solve(n));
	}
    return 0;
}
