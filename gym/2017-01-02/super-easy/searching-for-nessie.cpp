#include <bits/stdc++.h>
using namespace std;

int t, w,h;
int main() {
	scanf("%d",&t);
	while(t--) {
		scanf("%d %d",&w,&h);
		printf("%d\n",(w/3)*(h/3));
	}
	return 0;
}
