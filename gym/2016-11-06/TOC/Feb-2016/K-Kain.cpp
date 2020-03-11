#include <bits/stdc++.h>
using namespace std;

const int N = 1e7+5;

int factorial[N];

void init() {
	int i, j;
	for(i = 2; i <= N; i++)
		if(factorial[i]==0)
			for(j = i; j <= N; j += i)
				factorial[j] = i;
}

int getPrimeFactor(int val) {
	int ans= 0;
	while(val>1) {
		val/= factorial[val];
		ans++;
	}
	return ans;
}

int i, n, k, t;
int main() {
	init();
	cin >> t;
	while(t--) {
		cin >> n >> k;
		if(getPrimeFactor(n) == k) 
			cout << "Ya" << endl;
		else 
			cout << "Tidak" << endl;
	}
	return 0;
}
