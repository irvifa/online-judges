#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll n, i; 
int main() {
	cin >> n;
	for(i = 1; i <= n; i++) {
		if(i == 1) cout << 2 << endl;
		else cout << i*(i+1)*(i+1)-(i-1) << endl;;
	}
	return 0;
}