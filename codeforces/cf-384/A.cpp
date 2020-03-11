#include <bits/stdc++.h>
using namespace std;

int i, n, a, b, ans;
string s;
int main() {
	scanf("%d %d %d", &n, &a, &b);
	cin >> s;
	
	ans = 0;
	if(s[a-1]==s[b-1]) {
		printf("%d\n",ans);
	} else {
		ans++;
		printf("%d\n",ans);
	}
	
	return 0;
}
