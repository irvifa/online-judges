#include<bits/stdc++.h>
using namespace std;

const int N = 500005;

int n, b, h, w;
int p, a, total, i, j;
int main(){
	while(~scanf("%d %d %d %d",&n,&b,&h,&w)){
		total = N;
		for(i=0;i<h;i++){
			scanf("%d",&p);
			for (j = 0; j < w; j++) {
				scanf("%d",&a);
				if(a>=n){
					int tmp =n*p;
					if(tmp <= b && tmp < total)
						total = tmp;
				}
			}
		}
		if (total == N) puts("stay home");
		else printf("%d\n",total);
	}
	return 0;
}
