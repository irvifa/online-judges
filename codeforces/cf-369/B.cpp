#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int MAX = 501;

ll a[MAX][MAX];
ll r[MAX], c[MAX];
ll sum;
int i, j, n;
int x, y; 
ll ans, rsum, csum, mdiagsum, sdiagsum;
ll mdiag, sdiag;
bool is_pos, in_mdiag, in_sdiag;
int main() {
	scanf("%d",&n);
	if(n==1) {
		printf("1\n");
		return 0;
	}
	
	mdiag =0, sdiag=0;
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			scanf("%I64d",&a[i][j]);
			if(a[i][j]==0) {
				x=i; y=j;
			} else {
				r[i]+=a[i][j];
				c[j]+=a[i][j];
				if(i==j) mdiag+=a[i][j];
				if(i+j==n-1) sdiag+=a[i][j];
			}
		}
	}
	
	if(x==0) sum = r[1];
	else sum = r[0];
	is_pos = true;
	ans = 0;
	
	for(i=0; i<n; i++) {
		if(i!=x) {
			if(r[i]!=sum) {
				is_pos = false;
				break;
			}
		} else rsum = r[i];
	}
	
	for(i=0; i<n; i++) {
		if(i!=y) {
			if(c[i]!=sum) {
				is_pos = false;
				break;
			}
		} else csum = c[i];
	}
	
	if(x+y==n-1) in_sdiag = true;
	if(x==y) in_mdiag = true;
	
	if(!in_mdiag) {
		if(mdiag!=sum) 
			is_pos = false;
	} else mdiagsum = mdiag;
	
	if(!in_sdiag) {
		if(sdiag!=sum) 
			is_pos = false;
	} else sdiagsum = sdiag;
	
	if(rsum == csum) {
		if(in_mdiag && mdiagsum != rsum) 
			is_pos = false;
		if(in_sdiag && sdiagsum != rsum)
			is_pos = false;
		ans = sum - rsum;
		if(ans <= 0) is_pos = false;
	} else is_pos = false;
	
	if(is_pos) cout << ans << endl;
	else cout << "-1" << endl;
	
	return 0;
}
