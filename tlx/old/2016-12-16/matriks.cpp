#include <bits/stdc++.h>
using namespace std;

const int N = 100;
int a[N][N];
int i, m, n, j;
int main() {
	scanf("%d %d",&m,&n);
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			scanf("%d",&a[i][j]);
	
	for(i=0; i<n; i++) {
		for(j=m-1; j>=0; j--) {
			if(j==0)
				printf("%d",a[j][i]);
			else
				printf("%d ",a[j][i]);
		}
		puts("");
	}
	
	return 0;
}