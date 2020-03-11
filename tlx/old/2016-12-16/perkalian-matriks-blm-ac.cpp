#include <bits/stdc++.h>
using namespace std;

const int N = 75;
int a[N][N];
int b[N][N];
int i, ma, na, mb, nb, j, k;
int main() {
	scanf("%d %d",&ma,&na);
	for(i=0; i<ma; i++)
		for(j=0; j<na; j++)
			scanf("%d",&a[i][j]);
	
	scanf("%d %d",&mb,&nb);
	for(i=0; i<mb; i++)
		for(j=0; j<nb; j++)
			scanf("%d",&b[i][j]);
	
	int c[ma][nb];
	memset(c, 0, ma*nb*sizeof(c[0][0]));
	for(i = 0; i < ma; ++i)
        for(j = 0; j < nb; ++j)
            for(k = 0; k < na; ++k)
                c[i][j] += a[i][k] * b[k][j];
	
	for(i=0; i<ma; i++) {
		for(j=0; j<nb; j++) {
			if(j==nb)
				printf("%d",c[i][j]);
			else
				printf("%d ",c[i][j]);
		}
		puts("");
	}	
	return 0;
}