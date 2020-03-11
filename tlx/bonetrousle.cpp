#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(ll n, ll b, ll k) {
	ll ma, curr, j;
	ma= 0;
        
        for(j= k-b+1; j<=k; j++) {
            ma+=j;
            if(ma>n)break;
        }
        
		if (n>ma || n<((1+b)*b)/2) 
			cout << -1;
		else {
			for (j=b; j>0; j--){
                curr = 0;
                if((j-1)%2==1) {
                    if(n%j>j/2) curr = n/j + 1 + (j-1)/2 + 1;
                    else curr = n/j + (j-1)/2 + 1;
                } else {
                    if(n%j>0) curr = n/j + 1 + (j-1)/2;
                    else curr = n/j + (j-1)/2;
                }
				n -= curr;
				printf("%lld",curr);
				if (j != 1) printf(" ");
			}
		}
		return;
}

int t, i;
ll j, n, k, b;
int main() {
	scanf("%d",&t);
	for(i= 0; i<t; i++) {
		scanf("%lld %lld %lld",&n,&k,&b);
        solve(n,b,k);
		
		if (i != t - 1)
			printf("\n");
	}
	return 0;
}
