#include <bits/stdc++.h>
using namespace std;

int n, b, d;
int ans, sum, curr;
int main() {
	scanf("%d %d %d",&n,&b,&d);
	ans =0; sum =0;
	while(n--) {
		scanf("%d",&curr);
		if(curr<=b) {
			sum += curr;
			if(sum>d) {
				sum =0; ans++;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}
