#include<bits/stdc++.h>
using namespace std;

const int N = 101;
int matrix[N][N];
int R[N-1], C[N-1];
int n, i, j, ER, EC, ec, er;
int main() {
	while(scanf("%d", &n), n) {
		for(i = 0; i < n; i++)
			for(j = 0; j < n; j++)
				scanf("%d", &matrix[i][j]);
		memset(R, 0, sizeof(R));
		memset(C, 0, sizeof(C));
		for(i = 0; i < n; i++) {
			for(j = 0; j < n; j++) {
				C[i] += matrix[i][j];
				R[i] += matrix[j][i];
			}
		}
		ER = 0, EC = 0;
		for(i = 0; i < n; i++) {
			if(R[i]&1)	ER++, er = i;
			if(C[i]&1)	EC++, ec = i;
		}
		if(ER == 0 && EC == 0)
			puts("OK");
		else if(ER == 1 && EC == 1)
			printf("Change bit (%d,%d)\n", ec+1, er+1);
		else
			puts("Corrupt");
	}
    return 0;
}
