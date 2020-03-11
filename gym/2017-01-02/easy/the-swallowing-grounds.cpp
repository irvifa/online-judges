#include<bits/stdc++.h>
using namespace std;

int t, n, up, down, d, i;
bool flag;
int main() {
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		flag = true;
		scanf("%d %d", &up, &down);
		d = up - down;

		for(i = 0; i < n - 1; i++) {
			scanf("%d %d", &up, &down);
			if(d != up - down)
				flag = false;
		}

		if(flag) puts("yes");
		else puts("no");

		if(t) printf("\n");
	}
	return 0;
}
