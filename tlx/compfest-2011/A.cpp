#include <bits/stdc++.h>
using namespace std;

int T, R, L, J, X, ans = 0;
string Y;
int main() {
	scanf("%d",&T);
	while(T--) {
		cin >> R >> L >> J >> X >> Y;
		int sum = R*L*J;
		if(Y=="bayar") printf("%d\n",(X-sum));
		else printf("%d\n",(ans-sum)); 
	}
	return 0;
}
