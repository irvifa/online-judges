#include <bits/stdc++.h>
using namespace std;

const int N = 65537;

int cmp(const void *i, const void *j) {
	return *(int *)i - *(int *)j;
}

int pre(int *x) {
    static char c, neg;
    while((c = getchar()) < '-') if(c == EOF) return EOF;
    neg = (c == '-') ? -1 : 1;
    *x = (neg == 1) ? c-'0' : 0;
    while((c = getchar()) >= '0') 
    	*x = (*x << 3) + (*x << 1) + c-'0';
    *x *= neg;
    return 1;
}

int find(int idx, int a[]) {
	int i, sum;
	sum = 0, i = 0;
	while(1) {
		sum += a[i];
		if(sum >= idx) return i;
		i++;
	}
}

int n, i, x;
int mid, midn, midp, ne;
int a[N];		
int main() {
	while(scanf("%d", &n) == 1) {
		memset(a, 0, sizeof(a));
		for(i = 0; i < n; i++) {
			pre(&x), a[x]++;
		}
		
		if(n & 1) {
			mid = find(n/2+1, a);
			midn = a[mid];
			midp = 1;
		} else {
			mid = find(n/2, a);
			midn = a[mid];
			ne = find(n/2+1, a);
			
			if(ne != mid) {
				midn += a[ne], midp = ne - mid+1;
			} else {
				midp = 1;
			}
		}
		
		printf("%d %d %d\n", mid, midn, midp);
	}
    return 0;
}
