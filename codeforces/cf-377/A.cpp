#include<bits/stdc++.h>
using namespace std;

int T, k, i, j, tmp, ans;
int main() {
	cin >> T >> k;
	tmp = T;
	ans = 1;
	while((tmp%10!=0)&&(tmp-k)%10!=0) {
		ans++;
		tmp+=T;
		//cout << ans << endl;
	}
	cout << ans << endl;
	return 0;
}
