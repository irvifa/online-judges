#include<bits/stdc++.h>
using namespace std;

const int N = 20;

int n, target;
double dis[N][N], mem[1<<16];

double match(int bm) {
	double ans;
	int p1, p2;
	
	if(mem[bm] > -0.5) return mem[bm];
	if(bm == target) return mem[bm] = 0;
	
	ans = 2000000000.0;
	for(p1= 0; p1 < 2*n; p1++)
		if(!(bm & (1<<p1))) break;
	
	for(p2= p1+1; p2 < 2*n; p2++)
		if(!(bm & (1<<p2)))
			ans = min(ans, dis[p1][p2] + match (bm | (1 << p1) | (1 << p2)));
	
	return mem[bm] = ans;
}


int i, j, tc; 
int x[N], y[N];
int main() {
	tc = 0;
	while(scanf("%d",&n),n) {
		for(i = 0; i < 2*n; i++)
			scanf("%*s %d %d", &x[i], &y[i]);
		
		//cout << "asem2 jawa " << endl;
		for(i = 0; i < 2*n - 1; i++)
			for(j = i+1; j < 2*n; j++)
				dis[i][j] = dis [j][i] = hypot((double) (x[i] - x[j]),(double) (y[i] - y[j]));
		
		//cout << "asem2 jawa :(" << endl;
		
		for(i = 0; i < (1<<16); i++) mem[i] = -1.0;
		target = (1 << (2*n));
		target--;
		
		printf("Case %d: %.2lf\n", ++tc, match(0));
	}
	return 0;
}
