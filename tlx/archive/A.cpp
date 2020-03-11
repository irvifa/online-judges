#include <bits/stdc++.h>
using namespace std;

bool contain7(int n) {
	while(n>0) {
		int mod = n%10;
		if(mod == 7) return true;
		n/=10;
	}
	return false;
}
 
int T, n, ans, cnt;
int main() {
	scanf("%d",&T);
	while(T--) {
		scanf("%d",&n);
		int f = 1;
		ans = 1;
		cnt = 1;
		while(cnt < n) {
			if(contain7(ans) || ans%7==0){
				if (f == 1) f++;
				else f--; 
			} 
			if(f==1 && ans > 0 && ans <= n) {
				ans++;
			} else if(f==2 && ans > 0 && ans <= n) {
				ans--;
			} 
			
			if(ans < 1) ans = n;
			else if (ans > n) ans = 1;
			
			cnt++;
		}
		printf("%d\n",ans);
	}
	return 0;
}
